#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct{
    float x;
    float y;
    float z;
}Vector;

void print_vector(const Vector v);
Vector sum(const Vector v1,const Vector v2);
Vector diff(const Vector v1, const Vector v2);
double dot_product(const Vector v1, const Vector v2);
Vector cross_product(const Vector v1, const Vector v2);
double norm(const Vector v);
int is_unitvector(const Vector v);
Vector unit(const Vector v);
Vector multiplyby_scalar(const Vector v1, const double c);
double angle(const Vector v1, const Vector v2);
double distance(const Vector v1, const Vector v2);
int are_linearly_independent(const Vector v1, const Vector v2,const Vector v3);
int are_orthogonal(const Vector v1,const Vector v2, const Vector v3);
int are_orthonormal(const Vector v1,const Vector v2, const Vector v3);
Vector projection(const Vector v1, const Vector v2);
Vector orthogonal_projection(const Vector v1,const Vector v2);
int convert_2_orthogonal_basis(Vector *v1, Vector *v2, Vector *v3);
char* vector2str(const Vector v);


int main(){
    const Vector v1={1,2,2},v2={-1,0,2},v3={0,0,1};
    double k=2;
    
    printf("v1= ");
    print_vector(v1);
    printf("v2= ");
    print_vector(v2);
    printf("v3= ");
    print_vector(v3);

    printf("v1 + v2 = (%.2f, %.2f, %.2f)\n",sum(v1,v2).x ,sum(v1,v2).y ,sum(v1,v2).z);
    printf("v2 + v3 = (%.2f, %.2f, %.2f)\n",sum(v2,v3).x ,sum(v2,v3).y ,sum(v3,v3).z);
    printf("v1 + v3 = (%.2f, %.2f, %.2f)\n",sum(v1,v3).x ,sum(v1,v3).y ,sum(v1,v3).z);

    printf("v1 - v2 = (%.2f, %.2f, %.2f)\n",diff(v1,v2).x ,diff(v1,v2).y ,diff(v1,v2).z);
    printf("v2 - v3 = (%.2f, %.2f, %.2f)\n",diff(v2,v3).x ,diff(v2,v3).y ,diff(v2,v3).z);
    printf("v1 - v3 = (%.2f, %.2f, %.2f)\n",diff(v1,v3).x ,diff(v1,v3).y ,diff(v1,v3).z);

    printf("k * v1 = (%.2f, %.2f, %.2f)\n",k*v1.x ,k*v1.y ,k*v1.z);
    printf("k * v2 = (%.2f, %.2f, %.2f)\n",k*v2.x ,k*v2.y ,k*v2.z);
    printf("k * v3 = (%.2f, %.2f, %.2f)\n",k*v3.x ,k*v3.y ,k*v3.z);

    printf("v1 . v2 = (%.2lf)\n",dot_product(v1,v2));
    printf("v2 . v3 = (%.2lf)\n",dot_product(v2,v3));
    printf("v1 . v3 = (%.2lf\n)",dot_product(v1,v3));

    printf("v1 x v2 = (%.2f, %.2f, %.2f)\n",cross_product(v1,v2).x ,cross_product(v1,v2).y ,cross_product(v1,v2).z);
    printf("v2 x v3 = (%.2f, %.2f, %.2f)\n",cross_product(v2,v3).x ,cross_product(v2,v3).y ,cross_product(v2,v3).z);
    printf("v1 x v3 = (%.2f, %.2f, %.2f)\n",cross_product(v1,v3).x ,cross_product(v1,v3).y ,cross_product(v1,v3).z);

    printf("| v1 | = %.2lf\n",norm(v1));
    printf("| v2 | = %.2lf\n",norm(v2));
    printf("| v3 | = %.2lf\n",norm(v3));

    if(is_unitvector(v1)==1){
        printf("v1 is unit Vector.\n");
    }
    else{
        printf("v1 is not unit Vector.\n");
    }
    if(is_unitvector(v2)==1){
        printf("v2 is unit Vector.\n");
    }
    else{
        printf("v2 is not unit Vector.\n");
    }
    if(is_unitvector(v3)==1){
        printf("v3 is unit Vector.\n");
    }
    else{
        printf("v3 is not unit Vector.\n");
    }

    printf("unit( v1 ) = (%.2lf, %.2lf, %.2lf)\n",unit(v1).x ,unit(v1).y ,unit(v1).z);
    printf("unit( v2 ) = (%.2lf, %.2lf, %.2lf)\n",unit(v2).x ,unit(v2).y ,unit(v2).z);
    printf("unit( v3 ) = (%.2lf, %.2lf, %.2lf)\n",unit(v3).x ,unit(v3).y ,unit(v3).z);

    printf("v1/k = (%.2lf, %.2lf, %.2lf)\n",multiplyby_scalar(v1,k).x, multiplyby_scalar(v1,k).y, multiplyby_scalar(v1,k).z);
    printf("v2/k = (%.2lf, %.2lf, %.2lf)\n",multiplyby_scalar(v2,k).x, multiplyby_scalar(v2,k).y, multiplyby_scalar(v2,k).z);
    printf("v3/k = (%.2lf, %.2lf, %.2lf)\n",multiplyby_scalar(v3,k).x, multiplyby_scalar(v3,k).y, multiplyby_scalar(v3,k).z);

    printf("angle(v1 , v2) = %.2lf\n",angle(v1,v2));
    printf("angle(v2 , v3) = %.2lf\n",angle(v2,v3));
    printf("angle(v1 , v3) = %.2lf\n",angle(v1,v3));

    printf("distance(v1 , v2) = %.2lf\n",distance(v1,v2));
    printf("distance(v2 , v3) = %.2lf\n",distance(v2,v3));
    printf("distance(v1 , v3) = %.2lf\n",distance(v1,v3));

    if(are_linearly_independent(v1,v2,v3)==1){
        printf("vectors are linearly independent.");
    }
    else{
        printf("vectors are not linearly independent.");
    }
    

    if(are_orthogonal(v1,v2)==1){
        printf("v1 and v2 vectors are orthogonal.");
    }
    else{
        printf("v1 and v2 vectors are not orthohonal.");
    }
    if(are_orthogonal(v2,v3)==1){
        printf("v2 and v3 vectors are orthogonal.");
    }
    else{
        printf("v2 and v3 vectors are not orthogonal.");
    }
    if(are_orthogonal(v1,v3)==1){
        printf("v1 and v3 vectors are orthogonal.");
    }
    else{
        printf("v1 and v3 vectors are not orthogonal.");
    }


    if(are_orthonormal(v1,v2)==1){
        printf("v1 and v2 vectors are orthonormal.");
    }
    else{
        printf("v1 and v2 vectors are not orthogonal.");
    }
    if(are_orthonormal(v2,v3)==1){
        printf("v2 and v3 vectors are orthonormal.");
    }
    else{
        printf("v2 and v3 vectors are not orthonormal.");
    }
    if(are_orthonormal(v1,v3)==1){
        printf("v1 and v3 vectors are orthonormal.");
    }
    else{
        printf("v1 and v3 vectors are not orthonormal.");
    }


    printf("projection of v1 onto v2 is = (%.2f, %.2f, %.2f)",projection(v1,v2).x, projection(v1,v2).y, projection(v1,v2).z);
    printf("projection of v2 onto v3 is = (%.2f, %.2f, %.2f)",projection(v2,v3).x, projection(v2,v3).y, projection(v2,v3).z);
    printf("projection of v1 onto v3 is = (%.2f, %.2f, %.2f)",projection(v1,v3).x, projection(v1,v3).y, projection(v1,v3).z);

    printf("orthogonal projection of v1 onto v2 is = (%.2f, %.2f, %.2f)",orthogonal_projection(v1,v2).x, orthogonal_projection(v1,v2).y, orthogonal_projection(v1,v2).z);
    printf("orthogonal projection of v2 onto v3 is = (%.2f, %.2f, %.2f)",orthogonal_projection(v2,v3).x, orthogonal_projection(v2,v3).y, orthogonal_projection(v2,v3).z);
    printf("orthogonal projection of v1 onto v3 is = (%.2f, %.2f, %.2f)",orthogonal_projection(v1,v3).x, orthogonal_projection(v1,v3).y, orthogonal_projection(v1,v3).z);

     










    



}

void print_vector(const Vector v){
    printf("(%.2f, %.2f, %.2f)", v.x, v.y, v.z);
}

Vector sum(const Vector v1, const Vector v2){
    Vector sum;
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    sum.z=v1.z+v2.z;
    return (sum);
}

Vector diff(const Vector v1, const Vector v2){
    Vector diff;
    diff.x=v1.x-v2.x;
    diff.y=v1.y-v2.y;
    diff.z=v1.z-v2.z;
    return (diff);
}

double dot_product(const Vector v1, const Vector v2){
    Vector sum;
    double result;
    sum.x=v1.x * v2.x;
    sum.y=v1.y * v2.y;
    sum.z=v1.z * v2.z;
    result=sum.x+sum.y+sum.z;

    return result;

}

Vector cross_product(const Vector v1, const Vector v2){
    Vector result;
    result.x=v1.y*v2.z - v1.z*v2.y;
    result.y=v1.z*v2.x - v1.x*v2.z;
    result.z=v1.x*v2.y - v1.y*v2.x;

    return result;
}

double norm(const Vector v){
    double result;
    result=sqrt( pow(v.x , 2) + pow(v.y , 2) + pow(v.z , 2));

    return result;
}

int is_unitvector(const Vector v){
    if(norm(v)==1){
        return 1;
    }
    else{
        return 0;
    }
}

Vector unit(const Vector v){
    Vector result;
    result.x=v.x / norm(v);
    result.y=v.y / norm(v);
    result.z=v.z / norm(v);

    return result;
}

Vector multiplyby_scalar(const Vector v, const double c){
    Vector result;
    result.x=v.x * c;
    result.y=v.y * c;
    result.z=v.z * c;

    return result;
}

double angle(const Vector v1, const Vector v2){
    double tan;
    tan=acos(dot_product(v1,v2)/(norm(v1)*norm(v2)));

    return tan;
}

double distance(const Vector v1, const Vector v2){
    double result;
    result=abs((int)(norm(v1)-norm(v2)));
    

    return result;
}

int are_linearly_independent(const Vector v1, const Vector v2, const Vector v3){
    int result;
    result=(v1.x)*(v2.y)*(v3.z) + (v1.y)*(v2.z)*(v3.x) + (v1.z)*(v2.x)*(v3.y) - (v3.x)*(v2.y)*(v1.z) - (v3.y)*(v2.z)*(v1.x) - (v3.z)*(v2.x)*(v1.y);
    if(result!=0){
        return 1;
    }
    else{
        return 0;
    }
}

int are_orthogonal(const Vector v1, const Vector v2, const Vector v3){
    if((dot_product(v1) * dot_product(v2)==0) && (dot_product(v2)*dot_product(v3)==0) && (dot_product(v1)*dot_product(v3)==0)){
        return 1;
    }
    else return 0;
}

int are_orthonormal(const Vector v1,const Vector v2, const Vector v3){
    if(are_orthogonal(v1,v2,v3)==1 && norm(v1)==1 && norm(v2)==1 && norm(v3)){
        return 1;
    }
    else{
        return 0;
    }
}

Vector projection(const Vector v1,const Vector v2){
    Vector result;
    
    result.x=(dot_product(v1,v2) / pow(norm(v2),2)* (v2.x));
    result.y=(dot_product(v1,v2) / pow(norm(v2),2)* (v2.y));
    result.z=(dot_product(v1,v2) / pow(norm(v2),2)* (v2.z));

    return result;
}

Vector orthogonal_projection(const Vector v1, const Vector v2){
    Vector result;
    result.x=v1.x - (dot_product(v1,v2) / pow(norm(v2),2));
    result.y=v1.y - (dot_product(v1,v2) / pow(norm(v2),2));
    result.z=v1.z - (dot_product(v1,v2) / pow(norm(v2),2));

    return result;
}

int convert_2_orthogonal_basis(Vector *v1, Vector *v2, Vector *v3){
    Vector *d1, *d2, *d3;

    if(are_linearly_independent(v1,v2,v3)==1){
        *d1.x=*v1.x;  *d1.y=*v1.y;  *d1.z=*v1.z;
        *d2.x=*v2.x - dot_product(*v1,*v2)/pow(norm(*v2),2)*(*v2.x);  *d2.y=*v2.y - dot_product(*v1,*v2)/pow(norm(*v2),2)*(*v2.y);  *d2.z=*v2.z - dot_product(*v1,*v2)/pow(norm(*v2),2)*(*v2.z);
        *d3.x=*v3.x - dot_product(*v1,*v3)/pow(norm(*v3),2)*(*v3.x) - dot_product(*d2,*v3)/pow(norm(*v3),2)*(*v3.x);
        *d3.y=*v3.y - dot_product(*v1,*v3)/pow(norm(*v3),2)*(*v3.y) - dot_product(*d2,*v3)/pow(norm(*v3),2)*(*v3.y);
        *d3.z=*v3.z - dot_product(*v1,*v3)/pow(norm(*v3),2)*(*v3.z) - dot_product(*d2,*v3)/pow(norm(*v3),2)*(*v3.z);  
         return 1;  
    }
    else{
        return 0;
    }
}

    char* vector2str(const Vector v){
        char *temp[100];
        
        sprintf(*temp,"%.2f %.2f %.2f",v.x, v.y, v.z);
        return *temp;
    }
