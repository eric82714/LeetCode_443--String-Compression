int compress(char* chars, int charsSize){
    int count = 1, init = 0;
    char w = chars[0];
                
    for(int i = 1; i <= charsSize; i++){
        if(i < charsSize && chars[i] == w){             
            count ++;
            continue;
        } else{
            chars[init++] = w;
            if(count > 9){
                chars[init++] = (count / 10) + '0';
                chars[init++] = (count % 10) + '0';
            }
            else if(count > 1 && count <= 9){ 
                chars[init++] = count + '0';
            }
            if(i < charsSize){
                w = chars[i];           
                count = 1;
            }
        }
    }

    return init;
}
