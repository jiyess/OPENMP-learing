#include <omp.h>
#include <cstdio>

int main()
{
    omp_set_num_threads(4);
    #pragma omp parallel default(none)
    printf("Hello from thread %d, nthreads %d\n", omp_get_thread_num(), omp_get_num_threads());
}

//#include <cstdio>
//
//int main(){
//    #pragma omp parallel for default(none)
//    for (int i = 0; i < 10; ++i){
//        printf("%d\n", i);
//    }
//
//    printf("\n");
//    return 0;
//}


//#include <iostream>
//#include <omp.h>
//
//using namespace std;
//
//int main() {
//#pragma omp parallel num_threads(4) default(none) shared(cout)
//    {
//        for (int i = 0; i < 4; i++) {
//            for (int j = 0; j < 4; j++) {
//                printf("(%d,%d)", i, j);
//                cout << " Thread num == " << omp_get_thread_num() << endl;
//            }
//        }
//    }
//}

