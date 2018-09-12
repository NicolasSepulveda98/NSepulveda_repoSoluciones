import random

def comprueba_numero(numero, intento):
     if(numero==intento):
         print()
         print("Felicitaciones!")
         return True
     elif(numero>intento):
         print("El numero ingresado es Menor")
         print()
         return False
     else:
         print()
         print("El numero ingresado es Mayor:")
         return False

numero_aleatorio=random.randint(1,100)
intentos_requeridos=3
s=False
while(s is False):
     print("Ingrese un numero: ")
     try:
         numero_ingresado=int(input())
         s=comprueba_numero(numero_aleatorio, numero_ingresado)
         intentos_requeridos= intentos_requeridos -1
         if(intentos_requeridos==0):
             print("Los intentos se han acabado")
             break

     except:
         print("Intentos no Validos")
         pass
