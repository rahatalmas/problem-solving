function palindrome(str) {
    //console.log(str[0].toUpperCase(),str[0].toLowerCase())
    let alphaStr =[];
    let flag = true;
    for(let i=0;i<str.length;i++){
      if(str[i].toUpperCase() !== str[i].toLowerCase() || parseInt(str[i])){
         alphaStr.push(str[i].toUpperCase());
      }
    }
    let k =0;
    let j = alphaStr.length-1;
    while(k <= j){
      if(alphaStr[k] != alphaStr[j]){
        flag = false;
        break;
      }
      k++;
      j--;
    }
    //for debugging...
    //console.log(alphaStr)
    //console.log(flag);
    return flag;
  }
  
  palindrome("My age is 0, 0 si ega ym.");