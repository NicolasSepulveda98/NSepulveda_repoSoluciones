import pygame,sys
from pygame.locals import *

pygame.init()

NEGRO  = (   0,   0,   0)
BLANCO = ( 255, 255, 255)
#VERDE  = (   0, 255,   0)
#ROJO   = ( 255,   0,   0)
#AZUL   = (   0,   0,   255)

venta=pygame.display.set_mode((600,500))
pygame.display.set_caption("Maze Bandicoot")


COLOR = pygame.Color(0,200,250)

def  ganador(venta,posx,posy,  x, y):


        if posx == 570 and posy == 430:

            dialogo10 = pygame.font.SysFont("Noto Sans Mono CJK SC Bold",100)
            dialogo11= pygame.font.SysFont("FreeMono", 40)
            dialogo12 = pygame.font.SysFont("FreeMono", 40)
            dialogo13 = pygame.font.SysFont("FreeMono", 40)
            venta_ganador = pygame.display.set_mode((600,500))
            texto10 =  dialogo10.render("Ganaste",0,(NEGRO),(BLANCO))
            texto11 = dialogo11.render("[1] Volver al menu",0,(NEGRO),(BLANCO))
            texto12 = dialogo12.render("[2] Volver a jugar ",0,(NEGRO),(BLANCO))
            texto13 = dialogo13.render("[3] Salir",0,(NEGRO),(BLANCO))

            while True:

                venta_ganador.blit(texto10,(150,50))
                venta_ganador.blit(texto11,(0,200))
                venta_ganador.blit(texto12,(0,300))
                venta_ganador.blit(texto13,(0,400))

                for event in pygame.event.get():
                    if event.type == QUIT:
                        pygame.quit()
                        sys.exit()
                    elif event.type == pygame.KEYDOWN:
                        if event.key == K_1:
                            Menu()
                        if event.key == K_2 :
                            movimiento_y_laberinto()
                        if event.key == K_3:
                            pygame.quit()
                            sys.exit()


                pygame.display.flip()


def  opciones():
    dialogo4 = pygame.font.SysFont("Noto Sans Mono CJK SC Bold",40)
    dialogo5 = pygame.font.SysFont("FreeMono",30)
    dialogo6 = pygame.font.SysFont("FreeMono",20)
    dialogo7 = pygame.font.SysFont("FreeMono",30)
    dialogo8 = pygame.font.SysFont("FreeMono",20)
    dialogo9 = pygame.font.SysFont("FreeMono",30)
    texto4 = dialogo4.render("GUIA DE AYUDA MAZE  BANDICOOT ",0,(NEGRO))
    texto5 = dialogo5.render("I> Teclas de movimiento:", 0,(BLANCO),(120,40,50))
    texto6 = dialogo6.render("Flechas  del Teclado ",0,(NEGRO))
    texto7 = dialogo7.render("I> Metodo  para ganar:",0,(BLANCO),(120,40,50))
    texto8 = dialogo8.render("Guiar a Crush Bandicoot hacia la manzana",0,(NEGRO))
    texto9 = dialogo9.render("I> Volver [V]",0,(BLANCO),(120,40,50))

    while(True):

        venta.fill((120,40,50))
        venta.blit(texto4, (0,0))
        venta.blit(texto5,(30,40))
        venta.blit(texto6, (65,75))
        venta.blit (texto7,(30,120))
        venta.blit(texto8,(65,150))
        venta.blit(texto9,(30,200))

        for event in pygame.event.get():
            if event.type == pygame.KEYDOWN:
                if event.key == K_v:
                    Menu()

        pygame.display.flip()


def Menu():

    dialogo = pygame.font.SysFont("Noto Sans Mono CJK SC Bold", 50)
    dialogo2 = pygame.font.SysFont("FreeMono", 30)
    dialogo3 = pygame.font.SysFont("FreeMono", 30)
    dialogo14 = pygame.font.SysFont("FreeMono", 30)
    texto = dialogo.render("WELCOME TO MAZE BANDICOOT", 0, (NEGRO))
    texto1 = dialogo2.render("Comenzar [Enter]", 0, (BLANCO), (120,40,50))
    texto14 = dialogo14.render("Salir [ESC]",0,(BLANCO),(120,40,50))
    texto2 = dialogo3.render("AYUDA [A]",0,(BLANCO),(120,40,50))


    while(True):

        venta.fill((120,40,50))
        venta.blit(texto ,(20,200))
        venta.blit(texto1,(130,250))
        venta.blit(texto14,(130,280))
        venta.blit(texto2,(130,310))

        for event in pygame.event.get():
            if event.type == QUIT:
                        pygame.quit()
                        sys.exit()
            elif event.type == pygame.KEYDOWN:
                if event.key == K_RETURN:
                     movimiento_y_laberinto()
                if event.key == K_a :
                    opciones()
                if event.key == K_ESCAPE:
                              pygame.quit()
                              sys.exit()


        pygame.display.flip()


def movimiento_y_laberinto():

    #Introducir imagen
    Mi_imagen = pygame.image.load("Imagenes/crush.png")
    posx = 50
    posy = 10
    venta.blit(Mi_imagen, (posx, posy))
    Mi_imagen2 = pygame.image.load("Imagenes/manzana.png")
    x = 570
    y = 430
    venta.blit(Mi_imagen2,(x,y))


    velocidad =  10
    derecha =  True


    while(True):

        venta.fill((0,0,0))


        pygame.draw.rect(venta,COLOR,(0,0,40,500))
        pygame.draw.rect(venta,COLOR,(80,0,500,40))
        pygame.draw.rect(venta,COLOR,(560,0,40,420))
        pygame.draw.rect(venta,COLOR,(0,460, 600,40))

        pygame.draw.rect(venta,COLOR,(80,80,40, 100))
        pygame.draw.rect(venta,COLOR,(80,220,40,100))
        pygame.draw.rect(venta,COLOR,(80,360,40,400))
        pygame.draw.rect(venta,COLOR,(120,280,200,40))
        pygame.draw.rect(venta,COLOR,(160,360,40,60))
        pygame.draw.rect(venta,COLOR,(160,380,300,40))
        pygame.draw.rect(venta,COLOR,(160,40,40,200))
        pygame.draw.rect(venta,COLOR,(300,150,210,40))
        pygame.draw.rect(venta,COLOR,(300,150,40,190))
        pygame.draw.rect(venta,COLOR,(200,120,60,40))
        pygame.draw.rect(venta,COLOR,(250,200,60,40))
        pygame.draw.rect(venta,COLOR,(420,420,40,40))
        pygame.draw.rect(venta,COLOR,(500,380,60,40))
        pygame.draw.rect(venta,COLOR,(460,300,60,40))
        pygame.draw.rect(venta,COLOR,(500,220,60,40))
        pygame.draw.rect(venta,COLOR,(420,230,40,300))
        pygame.draw.rect(venta,COLOR,(300,80,40,70))
        pygame.draw.rect(venta,COLOR,(380, 40, 40, 70))
        pygame.draw.rect(venta,COLOR,(460, 80, 40, 70))
        pygame.draw.rect(venta,COLOR,(380, 280, 40,60))
        pygame.draw.rect(venta,COLOR,(340, 180, 40,60))
        pygame.draw.rect(venta,COLOR,(200, 40, 60,40))


        venta.blit(Mi_imagen2,(x,y))
        venta.blit(Mi_imagen, (posx, posy))


        for evento in pygame.event.get():
            if evento.type == QUIT:  #Poder cerrar ventana
                pygame.quit()
                sys.exit()


            elif evento.type == pygame.KEYDOWN:
                if evento.key == K_LEFT:
                    posx-= velocidad
                elif evento.key == K_RIGHT:
                    posx+=velocidad
                if evento.type == pygame.KEYDOWN:
                    if evento.key == K_UP:
                        posy-=velocidad
                    elif evento.key == K_DOWN:
                        posy+=velocidad



        ganador(venta,posx,posy,  x, y)


        pygame.display.update()

Menu()
movimiento_y_laberinto()
ganador(venta,posx,posy,  x, y)