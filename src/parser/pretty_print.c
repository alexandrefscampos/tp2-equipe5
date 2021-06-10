#include <stdio.h>
#include <stdlib.h>
#include "ast.h"
#include "cminus.tab.h"

extern struct decl *parser_result;

void prettyprint_stmt(struct stmt *t);
void prettyprint_func(struct decl *f);
void prettyprint_expr(struct expr *e);

void prettyprint_name(char *name)
{
    printf("[%s]", name);
}

void prettyprint_type(struct type *type)
{
    struct type *t = type;
    if (t)
    {
        switch (t->kind)
        {
        case TYPE_VOID:
        {
            printf("[void]");
            break;
        }
        case TYPE_INTEGER:
        {
            printf("[int]");
            break;
        }
        case TYPE_ARRAY:
        {
            if (t->subtype)
                prettyprint_type(t->subtype);

            break;
        }
        case TYPE_FUNCTION:
        {
            if (t->subtype)
                prettyprint_type(t->subtype);
            break;
        }
        default:
            break;
        }
    }
}

void prettyprint_params(struct param_list *pl)
{
    struct param_list *p = pl;

    if (!p)
    {
        return;
    }

    prettyprint_params(p->next);

    if (p->type->kind != TYPE_VOID)
    {
        printf("[param ");
        if (p->type)
            prettyprint_type(p->type);
        if (p->name)
            printf("[%s]", p->name);
        if (p->type->kind == TYPE_ARRAY)
            printf("[\\[\\]]");
        printf("]");
    }
}
void prettyprint_id_list(struct id_list *pl)
{
    struct id_list *p = pl;

    if (!p)
    {
        return;
    }

    prettyprint_id_list(p->next);
    printf("\n[enum-const ");
    if (p->name)
    {
        printf("[%s]", p->name);
    }

    printf("]");
}

void prettyprint_var(struct decl *var)
{
    printf("\n[var-declaration ");
    prettyprint_type(var->type);
    prettyprint_name(var->name);
    printf("]");
}

void prettyprint_array(struct decl *array)
{
    printf("\n[var-declaration ");
    struct type *t = array->type;
    prettyprint_type(array->type);
    prettyprint_name(array->name);
    prettyprint_expr(array->expr);
    printf("]");
}

void prettyprint_func(struct decl *func)
{
    printf("\n[fun-declaration ");
    prettyprint_type(func->type);
    prettyprint_name(func->name);
    printf("\n[params");
    struct type *t = func->type;
    if (t->params)
        prettyprint_params(t->params);
    printf("]");
    if (func->code)
        prettyprint_stmt(func->code);
    printf("]");
}

prettyprint_const(struct decl *decl)
{
    printf("\n[const-declaration ");
    printf("[int] ");
    printf("[%s] ", decl->name);
    if (decl->expr)
    {
        int i = decl->expr->integer_value;
        printf("[%d] ", i);
    }
    printf("] ");
}

void prettyprint_decl(struct decl *decl)
{
    if (!decl)
    {
        return;
    }

    prettyprint_decl(decl->next);

    struct type *t = decl->type;
    switch (t->kind)
    {
    case TYPE_VOID:
    {
        printf("[void]");
        break;
    }
    case TYPE_INTEGER:
    {
        if (decl->expr)
            prettyprint_const(decl);
        else
            prettyprint_var(decl);
        break;
    }

    case TYPE_ENUM:
    {
        if (!decl->type->id_list)
        {

            printf("\n[enum-var-declaration ");
            prettyprint_name(decl->type->subtype);
            printf("[%s] ", decl->name);
        }
        else
        {
            printf("\n[enum-type-declaration ");
            prettyprint_name(decl->type->subtype);

            if (decl->name)
                printf("[%s] ", decl->name);

            if (decl->type->id_list)
            {
                printf("\n[enum_consts");
                prettyprint_id_list(decl->type->id_list);
                printf("\n]");
            }
        }
        printf("\n] ");
        break;
    }
    case TYPE_ARRAY:
    {
        prettyprint_array(decl);
        break;
    }
    case TYPE_FUNCTION:
    {
        prettyprint_func(decl);
        break;
    }
    default:
    {
        break;
    }
    }
}

void prettyprint_stmt(struct stmt *s)
{
    if (!s)
    {

        return;
    }

    prettyprint_stmt(s->next);

    switch (s->kind)
    {
    case STMT_EXPR:
    {
        if (s->expr)
            prettyprint_expr(s->expr);
        else
            printf("[;]\n");
        break;
    }
    case STMT_IF_ELSE:
    {
        printf("\n[selection-stmt ");
        prettyprint_expr(s->expr);
        prettyprint_stmt(s->body);
        if (s->else_body)
            prettyprint_stmt(s->else_body);
        printf("]\n");
        break;
    }
    case STMT_WHILE:
    {
        printf("\n[iteration-stmt ");
        prettyprint_expr(s->expr);
        prettyprint_stmt(s->body);
        printf("]\n");
        break;
    }
    case STMT_PRINT:
    {
        break;
    }
    case STMT_RETURN:
    {
        printf("\n[return-stmt ");
        if (s->expr)
            prettyprint_expr(s->expr);
        else
            printf("[;]\n");
        printf("]");
        break;
    }
    case STMT_BLOCK:
    {
        printf("\n[compound-stmt ");
        if (s->decl)
            prettyprint_decl(s->decl);
        if (s->body)
            prettyprint_stmt(s->body);
        printf("]\n");
        break;
    }
    default:
        break;
    }
}

void prettyprint_bexpr(char *c, struct expr *l, struct expr *r)
{
    printf("\n[%s ", c);
    prettyprint_expr(l);
    if (r)
        prettyprint_expr(r);
    printf("]");
}

void prettyprint_expr(struct expr *e)
{
    if (e)
    {
        switch (e->kind)
        {
        case EXPR_ASSIGN:
        {
            prettyprint_bexpr("=", e->left, e->right);
            break;
        }
        case EXPR_ADD:
        {
            prettyprint_bexpr("+", e->left, e->right);
            break;
        }
        case EXPR_SUB:
        {
            prettyprint_bexpr("-", e->left, e->right);
            break;
        }
        case EXPR_MUL:
        {
            prettyprint_bexpr("*", e->left, e->right);
            break;
        }
        case EXPR_DIV:
        {
            prettyprint_bexpr("/", e->left, e->right);
            break;
        }
        case EXPR_NAME:
        {
            printf("[%s]", e->name);
            break;
        }
        case EXPR_VAR:
        {
            printf("[var ");
            prettyprint_expr(e->left);
            printf("]");
            break;
        }

        case EXPR_ARRAY:
        {
            printf("[var ");
            prettyprint_expr(e->left);
            prettyprint_expr(e->right);
            printf("]");
            break;
        }
        case EXPR_INTEGER_LITERAL:
        {
            printf("[");
            int i = e->integer_value;
            printf("%d", i);
            printf("]");
            break;
        }
        case EXPR_EQ:
        {
            prettyprint_bexpr("==", e->left, e->right);
            break;
        }
        case EXPR_NEQ:
        {
            prettyprint_bexpr("!=", e->left, e->right);
            break;
        }
        case EXPR_LT:
        {
            prettyprint_bexpr("<", e->left, e->right);
            break;
        }
        case EXPR_GT:
        {
            prettyprint_bexpr(">", e->left, e->right);
            break;
        }
        case EXPR_LTEQ:
        {
            prettyprint_bexpr("<=", e->left, e->right);
            break;
        }
        case EXPR_GTEQ:
        {
            prettyprint_bexpr(">=", e->left, e->right);
            break;
        }
        case EXPR_AND:
        {
            prettyprint_bexpr("&&", e->left, e->right);
            break;
        }
        case EXPR_OR:
        {
            prettyprint_bexpr("||", e->left, e->right);
            break;
        }
        case EXPR_INC:
        {
            prettyprint_bexpr("++", e->right, NULL);
            break;
        }
        case EXPR_DEC:
        {
            prettyprint_bexpr("--", e->right, NULL);
            break;
        }
        case EXPR_NOT:
        {
            prettyprint_bexpr("!", e->right, NULL);
            break;
        }
        case EXPR_FUN:
        {
            break;
        }
        case EXPR_EMPTY:
        {
            printf("\n[;]");
            break;
        }
        case EXPR_CALL:
        {
            printf("\n[call ");
            prettyprint_expr(e->left);
            printf("\n[args ");
            prettyprint_expr(e->right);
            printf("]\n");
            printf("]\n");
            break;
        }
        case EXPR_ARG:
        {
            prettyprint_expr(e->left);
            prettyprint_expr(e->right);
            break;
        }
        default:
        {
            break;
        }
        }
    }
}

void bracket(struct decl *program)
{
    printf("[program ");
    prettyprint_decl(program);
    printf("\n]\n");
}