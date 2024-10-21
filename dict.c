void int_to_obj(int src, object *dst){
    //(*dst).type = 0;
    dst->type = 0;
    sprintf(dst->data, "%s", src);

}


dict *dict_new(){
    dict *d = malloc(sizeof *d));
    
   if(d!=NULL){
        d->len = 0;
        d->first = NULL;
   }

    return d;
}