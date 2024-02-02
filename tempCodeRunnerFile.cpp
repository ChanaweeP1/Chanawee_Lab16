void findRowSum(const double *a,double *b,int N ,int M ){
	for(int i =0 ; i < N ; i++){
			for(int j = 0;i < M ; j++)
				b[i] +=a[i];
		}

void showData(double *a,int N,int M){
    cout << fixed << setprecision(2);
    for(int i = 0; i < N*M; i++){
    cout << a[i];
        if(i%M == M-1) cout << endl;
        else cout << " ";
    }
}

}

int main(){
    double a[2][3] = {1,2,3,4,5,6}; 
    double b[2]; 
    findRowSum(a[0],b,2,3);
    showData(b,2,1);
    return 0;
}