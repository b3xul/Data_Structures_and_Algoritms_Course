#include "Item.h"

static int Key_cmp(Key a,Key b);

Key Item_get_key(Item* x){
    return (Key)x;
}

Item Item_load(char* nome){
    Item x="";
    strcpy(x,nome);
    return x;
}

Item Item_read(FILE* fp){
    Item x="";
    fscanf(fp,"%s",x);
    return x;
}

int Item_cmp(Item a, Item b){
    return Key_cmp(Item_get_key(&a),Item_get_key(&b));
}

static int Key_cmp(Key a,Key b){
    return strcmp(a,b);
}

void Item_store(Item x){
    printf("Vertice:%s ",x);
}

Item Item_set_void(){
    Item x = "";
    return x;
}

int Item_check_void(Item x){
    return (strcmp(x,"")==0);
}
