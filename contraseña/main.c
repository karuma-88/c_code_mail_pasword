//
//  main.c
//  correoelectronico
//
//  Created by mario gallego cano on 17/11/2019.
//  Copyright © 2019 mario gallego cano. All rights reserved.
//

#include <stdio.h>

int main() {
    int ver=0;
    int ver2=0;
    char corre0[50];
    while (ver==0) {
    printf("introduzca su correo electrónico:");
    gets(corre0);
    fflush(stdin);
    int a=0;    int i=0;    int pa=0;    int a2=0;//contador @
    int t=0;    int c=0;    int pt=0;    int t2=0;//contador .
    while((corre0[i]!='\0'&&i<=50)){i++;
        switch(corre0[i]){
            case'@': a++;
        }};
    if(a==1){
        while((corre0[pa]!='\0'&&pa<=50&&a2!=1)){pa++;
        switch(corre0[pa]){
            case'@': a2++;
        }};
    }
    while((corre0[c]!='\0'&&c<=50)){c++;
        switch(corre0[c]){
            case'.': t++;
        }};
    if(t==1){
        while((corre0[pt]!='\0'&&pt<=50&&t2!=1)){pt++;
        switch(corre0[pt]){
            case'.': t2++;
        }};
       
    }
    if(a==1&&t==1&&pt>pa>0&&pt>pa+1&&corre0[pt+1]!='\0'){
        ver=1;
        printf("\ncorreo correcto\n\n");
        //a partir de aqui es para poner contraseña
        char preg[10];
        int r=0;
        printf("¿desea añadir una contraseña ahora?\n\n(escriba s en caso de querer añadir la contraseña y n en caso de no querer añadirla)\n");
        gets(&preg[1]);
        fflush(stdin);
        if(preg[1]=='s'){
            r++;
        }else{printf("muchas gracias\n"); return 0;}
        while (ver2==0){
        if(r>0){
            //para número
            int rn=0;    int irn=0;    int prn=0;  int r2n=0;
            //int mayus=0; int nmayus=0;
            //int carácteres=0;
            char contraseña[50];
            printf("introduzca la contraseña a continuación:\n");
            printf("le recordamos los requisitos de la contraseña:\n_La contraseña ha de tener entre 5 y 15 carácteres\n_Al menos una letra mayúscula\n_Al menos un número\n");
            gets(contraseña);
            fflush(stdin);
            while((contraseña[irn]!='\0'&&irn<=50)){irn++;
                switch(contraseña[irn]){
                    case'1': rn++;break; case'2': rn++;break;    case'3': rn++;break;    case'4': rn++;break;    case'5': rn++;break;    case'6': rn++;break;    case'7': rn++;break;    case'8': rn++;break;    case'9': rn++;break;    case'0': rn++;break;
                        }};
                      if(rn==1){
                   while((contraseña[prn]!='\0'&&prn<=50&&r2n!=1)){prn++;
                  switch(contraseña[prn]){
                    case'1': r2n++;break;    case'2': r2n++;break;   case'3': r2n++;break;   case'4': r2n++;break;   case'5': r2n++;break;   case'6': r2n++;break;   case'7': r2n++;break;   case'8': r2n++;break;   case'9': r2n++;break;   case'0': r2n++;break;
                  }};
                      }
             //me falta la detección de mayúsculas pero no se hacerla xd
            int ver4=0;
            while (ver4<2){
            if(irn>5&&irn<16&&rn>0){
                ver2=1;
                int d=0;
                char contraseña2[50];
                if(ver4==0){
                    printf("La contraseña cumple con los rquisitos\n");}
                printf("Por motivos de seguridad por favor repita la contraseña de nuevo:\n");
                gets(contraseña2);
                fflush(stdin);
                int pepe=0;
                while(pepe<irn){
                    if(contraseña[pepe]==contraseña2[pepe]){
                        d++;}pepe++;}
                if(d==irn){printf("Las contraseñas coinciden.\n\n su correo es: \n %s \n \n y su contraseña:\n %s\n\n",corre0,contraseña);ver4=2;}
                if(d!=irn){printf("Las contraseñas no coinciden, por favor vuelva a empezar\n\n");ver4=1;}}}
        }else{printf("la contraseña no es correcta, revise los requisitos");}
        }
        }else{printf("\ncorreo no válido, para que el correo sea valido por favor:\n\n");}
        if(a>1){
            printf("use solo un @\n\n");}
        if(t>1){
            printf("use solo un .\n\n");}
        if(pt==pa+1){
            printf("complete el espacio entre el @ y el . con un dominio\n\n");}
        if(t<1){
            printf("escriba un .com/.es o cualquier otro tipo de sufijo terminado en . al final del correo\n\n");}
        if(a<1){
            printf("no se olvide de escribir un @ con su dominio correspondiente\n\n");}
        if(corre0[pt+1]=='\0'){
            printf("no se olvide de escribir el correspondiente prefijo tras el .\n\n");}
    }
    return 0;
    }

