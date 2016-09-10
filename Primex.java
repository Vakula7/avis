public class Primex{
public static void main(String[] args) {	
int i1=366;
	int a[]={11,13,17,19,23,29,31,37,41,43};
	for(int j=0;j<a.length;j++){
		if(i1==a[j]){
			System.out.println("1");
		}
      }	
	if(i1<22){
			System.out.println("-1");
		}
			for(int j=0;j<a.length;j++){
				for(int k=0;k<a.length;k++){
					int c=a[j]+a[k];
				if(c==i1){
				System.out.println("2");
								}
				}
			}
	
}System.out.println("0");
}
}
