#include <stdio.h>
int main(){
    int n,m,mt[50][50],i,j;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&mt[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(mt[i][j]==1111){
                if(i!=0 && j!=0 && j!=(m-1) && i!=(n-1)){
                    if(mt[i-1][j]==4){
                        if(mt[i+1][j]==8){
                            if(mt[i][j-1]==0){
                                if(mt[i][j+1]==0){
                                    printf("%d %d\n",i,j);
                                    return 0;
                                }
                            }
                        }
                    } 
                } else {
                    if(j==0 && i!=0 && i!=(n-1)){
                        if(mt[i-1][j]==4){
                            if(mt[i+1][j]==8){
                                if(mt[i][j+1]==0){
                                    if(mt[i][m-1]==0){
                                        printf("%d %d\n",i,j);
                                        return 0;
                                    }
                                }
                                
                            }
                        }
                    } else if(j==(m-1) && i!=0 && i!=(n-1)){
                        if(mt[i-1][j]==4){
                            if(mt[i+1][j]==8){
                                if(mt[i][j-1]==0){
                                    if(mt[i][0]==0){
                                        printf("%d %d\n",i,j);
                                        return 0;
                                    }
                                }
                            }
                        }
                    } else if(i==0 && j!=0 && j!=(m-1)){
                        if(mt[i+1][j]==8){
                            if(mt[i][j-1]==0){
                                if(mt[i][j+1]==0){
                                    if(mt[n-1][j]==4){
                                        printf("%d %d\n",i,j);
                                        return 0;
                                    }
                                }
                            }
                        } 
                    } else if(i==(n-1) && j!=0 && j!=(m-1)){
                        if(mt[i-1][j]==4){
                            if(mt[i][j-1]==0){
                                if(mt[i][j+1]==0){
                                    if(mt[0][j]==8){
                                        printf("%d %d\n",i,j);
                                        return 0;
                                    }
                                }
                            }
                        } 
                    } else if(i==0 && j==0){
                        if(mt[i+1][j]==8){
                            if(mt[i][j+1]==0){
                                if(mt[i][m-1]==0){
                                    if(mt[n-1][j]==4){
                                        printf("%d %d\n",i,j);
                                        return 0;
                                    }
                                }
                            }
                        } 
                    } else if(i==(n-1) && j==0){
                        if(mt[i-1][j]==4){
                            if(mt[i][j+1]==0){
                                if(mt[i][m-1]==0){
                                    if(mt[0][j]==8){
                                        printf("%d %d\n",i,j);
                                        return 0;
                                    }
                                }
                            }
                        } 
                    } else if(i==0 && j==(m-1)){
                        if(mt[i+1][j]==8){
                            if(mt[i][j-1]==0){
                                if(mt[n-1][j]==4){
                                    if(mt[i][0]==0){
                                        printf("%d %d\n",i,j);
                                        return 0;
                                    }
                                }
                            }
                        } 
                    } else if(i==(n-1) && j==(m-1)){
                        if(mt[i-1][j]==4){
                            if(mt[i][j-1]==0){
                                if(mt[0][j]==8){
                                    if(mt[i][0]==0){
                                        printf("%d %d\n",i,j);
                                        return 0;
                                    }
                                }
                            }
                        } 
                    }
                }
            }
        }
    }
    printf("WALLY NAO ESTA NA MATRIZ\n");
    return 0;
}