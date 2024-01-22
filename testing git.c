function timMuaTrongNam(n){
    switch(true){
        case n>=7 && n<=8:{
            console.log('mua xuan')
            break
        }
        case n>=6 && n<=8:{
            console.log('mua he')
            break
        }
        case n>=9 && n<=11:{
            console.log('mua thu')
            break
        }
        default:{
            console.log('mua dong')
        }
        
        }
    };
    timMuaTrongNam(5)

    