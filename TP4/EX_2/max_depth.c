int max_depth(Tree* T){
    if(T=NULL)
        return 0;
    return 1+max(max_nodes(left(T) , max_nodes(right(T)) ;
}
