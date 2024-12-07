#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

void cap0();
void cap11();
void cap12();
void cap21();
void cap41();
void cap5();
void cap6();

void capa();
void caveira();
void morteBIG();
void crusherBIG();
void gameover();
void guerreiro();
void navio();
void oriental();
void caos();
void win();
int dado();
int FAinimingo(int Hinimigo);
int FAheroi(int Hheroi);
int Tsorte(int *SORTEh); 
int batalha(int *SORTEh, int *ENERGIAi, int *ENERGIAh, int HABheroi, int HABinimigo);
int escolha();
void status(int habH, int energiaH, int sorteH, int saveH, char nomeH);


typedef struct _PER
{
    char nome[30];
    int habi;
    int energia;
    int sorte;
    int local;
    int arma;
} HEROI;
void novogame(HEROI *jogador);
void salvar(HEROI *jogador);
void salvarG(HEROI *jogador);
HEROI abrirsalve();
HEROI abrirguarda();

typedef struct _VIL
{
    int habi;
    int energia;
} VILAO;
int main(){



int escolha, arma, fh, fi, game, r1, r2, resultado;
HEROI player, guarda;

do
   {
      capa();
    printf("\t\t  ======================PROVA DOS CAMPEOES======================");
    printf("\n\n\n\t\t\t\t\t   8)NOVO JOGO\n");
    printf("\t4)CREDITOS\t\t\t\t\t\t\t    6)CONTINUAR\n\n\n");

	scanf("%d", &escolha);
    switch (escolha)
    {
    case 8:printf("\tVoce escolheu (8)\n");
                  printf("\n\n");
                  system("pause");
                  system("cls");
           novogame(&player);
           guarda=player;
           salvar(&player);
           salvarG(&guarda);
           game=1;
                  printf("\n\n");
                  system("pause");
                  system("cls");
           break;
        
    case 4:       printf("\n\n");
                  system("pause");
                  system("cls");
           printf("\n\t\tJOGO P.E\nPedro G.\nMariana F.\nYago.\n\n");     
            
                  printf("\n\n");
                  system("pause");
                  system("cls");
                  printf("\n\n");

          printf("\n==============ESSE JOGO VALE 10!!!!=============");
                 printf("\n\n");
                  system("pause");
                  system("cls");
                  printf("\n\n");

        break;
    case 6:printf("\tVoce escolheu (8)\n");
            
            player=abrirsalve();
            guarda=abrirguarda();
            
            game=1;
               printf("\n\n");
                  system("pause");
                  system("cls");

        break;
    default:printf("\nERRO na escolha\n");
            system("cls");
            break;
    }
   }while(escolha!=6 && escolha!=8);

   while(game!=0)
    {
      
        switch(player.local)
        {
         case 0:  
                  cap0();
                  
                  player.local=1;
                  salvar(&player);

                      printf("\n\n");
                     system("pause");
                     system("cls");

         case 1:
                 do
                        {
                         printf("\nO guarda se vira para voce e oferece um pouco de pao e uma tigela de sopa.\n");//save 1

                          printf("\t      8)Aceitar a comida\n");
                          printf("\n4)Salvar e sair                    6)Status\n");
                          printf("\t\n            2)Tentar dominar o guarda\n");
    
	                     scanf("%d", &escolha);
    
                         switch (escolha)
                         {
                         case 8:printf("\tVoce escolheu (8)\n");
                                printf("\nA sopa eh engrossada com galinha e legumes e tem sabor delicioso.\nVoce a devora gulosamente e aproveita ate as ultimas gotas com o pao. Nao tem comido bem por uma quinzena e agora se sente pronto e inteiro para a proxima provacao.\n Quando termina de comer tudo, eh levado para comecar seu primeiro dia na Arena da Morte.");
                                break;
        
                         case 2:printf("\tVoce escolheu (2)\n");
                               printf("\nVoce mergulha nas pernas do guarda e o derruba no chao. As tigelas de sopa retinem no chao, enquanto luta com ele.\n Antes que seus companheiros de cela tenham uma chance de seguir seu exemplo, o outro guarda escapa e tranca a porta.\n");
                                printf("\nCompreende que seu esforco eh inutil... \nSolta o guarda e levanta-se para aguardar sua punicao. Voce eh levado de la e acoitado pelo guarda que atacou.");
                                printf("PERCA 4 pontos de ENERGIA e 1 ponto de HABILIDADE");
                               player.energia=player.energia-4; 
                                player.habi=player.habi-1;
    
                         case 4: printf("\tVoce escolheu (4)\n");     
                                  printf("\n\n");
                                  salvar(&player);
                                  system("pause");
                                  system("cls");
                                game=0;

                             break;
                         case 6:printf("\nEnergia=%d \nHabilidade=%d \nSorte=%d", player.energia, player.habi, player.sorte);
                             printf("\n\n");
                             system("pause");
                             system("cls");


                             break;
                         default:printf("\nERRO na escolha\n");
                                 system("cls");
                                 break;
                         }
                        }while(escolha!=2 && escolha!=8 && escolha!=4);
                                       printf("\n\n");
                                       system("pause");
                                       system("cls");
                                       if(escolha==4) break;
                                       salvar(&player);

                                cap11();
  
                                 if(Tsorte(&player.sorte)==1)
                                 {
                                   printf("\nVoce ve a perna do ogre bem a tempo e da um jeito de pular sobre ela e correr para a frente.\n Voce diminui novamente e comanda a velocidade da corrida de modo a lhe convir.\n");
                                   system("pause");
                                   system("cls");

                                 }else{
                                   printf("\nInfelizmente voce nao ve a perna do Ogro a tempo, o que lhe custa caro, ja que ao tropecar em sua grande perna peluda voce cai no chao e machuca seu braco dominante\n");
                                   printf("Voce perdeu 1 ponto de ENERGIA e 1 ponto de HABILIDADE\n");
                                   player.energia=player.energia-1;
                                   player.habi=player.habi-1;
                                   system("pause");
                                   system("cls");
                                 }

                                cap12();

                                 printf("Jogue dois dados, adicionando 3 ao resultado\n");

                                 r1=dado();
                                 r2=dado();
                                 resultado= r1+r2+3;
                                  if(resultado<=player.habi)
                                  {
                                       printf("\n\n");
                                       system("pause");
                                       system("cls");

                                       printf("\nO nordico aumenta sua lideranca sobre o resto de voces, mas voce sente que ainda tem uma boa reserva, caso ele chegue perto de vencer todos\n");
                                       guerreiro();
                                       printf("Quando ele fica a dez metros da chegada, todo mundo decide acelerar. Ha apenas dois corredores a sua frente, mas voce nao olha para tras.\n De repente, ouve um grito agoniado seguido de outro grito, mandando parar a corrida.\n");
                                       printf("O anao deita-se prostrado na areia, tendo caido bem na hora que o nordico o alcancou. Enquanto sao levados de volta para suas celas, o anao eh rapidamente morto, antes do comeco da proxima corrida.\n");
        
                                      printf("\n\n");
                                       system("pause");
                                       system("cls");
                                   }else
                                    {
                                       printf("\nO peso das pedras o esta  enfraquecendo lentamente e quando da o proximo pulo sobre os carvoes em brasa, voce torce seu tornozelo ao aterrissar e cai na areia. Voce observa os outros avancarem enquanto se levanta.\n Eles estao mais da metade do circuito a sua frente, enquanto voce manca atras deles, tentando alcanca-los.\n");
                                       player.energia=player.energia-3;  
                                       printf("Voce perdeu 3 pontos de ENERGIA\n");
                                       printf("\nVoce agora tem %d pontode de ENERGIA", player.energia);
    
                                       printf("\n\n");
                                       system("pause");
                                       system("cls");
                                    }

                                   printf("\nQuando todas as corridas terminaram e os sobreviventes estao de volta a suas celas, voce descobre que o homem careca nao retornou; agora sobraram apenas tres outros em sua cela.\n");
                                       printf("Embora exausto, sente dificuldade em pegar no sono: sua mente esta ocupada com o desafio que o proximo dia trara. De manha, voces sao alimentados e entao, um por um, os escravos sao conduzidos para a arena.\n");
                                       printf("Eventualmente sua vez chega e, quando atinge a porta para a arena, eh ordenado que escolha armas");
                                    
                                    player.local=2;
                                    salvar(&player);
                                       printf("\n\n");
                                       system("pause");
                                       system("cls");
          case 2:
                                                             do
                                          {
                                           printf("\nUma ESPADA e ESCUDO  ou um TRIDENTE e REDE\n\n");

                                            printf("\t      8)ESPADA E ESCUDO\n");
                                            printf("\n4)Sair do jogo                    6)Status\n");
                                            printf("\t\n            2)TRIDENTE E REDE\n");
    
                                       	scanf("%d", &escolha);
    
                                           switch (escolha)
                                           {
                                           case 8:printf("\nVoce escolheu (8)\n");
                                                  player.arma=0;
                                                  arma=0;
                                                  printf("Voce escolheu a ESPADA e ESCUDO, armas formidaveis e mortais, para quem sabe utilizar\n");
           
                                                  break;
        
                                           case 2:printf("\nVoce escolheu (2)\n");
                                                  player.arma=1;
                                                  arma=1;
                                                  printf("Voce escolheu TRIDENTE e REDES, ferramentas que voce domina maravilhosamente\n");
                                                  break;
                                           case 4:printf("\tVoce escolheu (4)\n");     
                                                  printf("\n\n");
                                                  salvar(&player);
                                                  game=0;     
                                                  
                                               break;
                                           case 6:printf("\nVoce escolheu (6)\n");
                                                  printf("\nEnergia=%d \nHabilidade=%d \nSorte=%d", player.energia, player.habi, player.sorte);
                                                  printf("\n\n");
                                                  system("pause");
                                                  system("cls");
                                               break;
        
                                           default:printf("\nERRO na escolha\n");
                                                   system("cls");
                                                   break;
                                           }
                                         }while(escolha!=2 && escolha!=8 &&escolha!=4);
                                         printf("\n\n");
                                                   system("pause");
                                                   system("cls");
                                                   if(escolha==4) break;
                                                   salvar(&player);

                                              cap21();

                                                player.local=3;
                                                salvar(&player);
                                                    printf("\n\n");
                                                   system("pause");
                                                   system("cls");
                                                   printf("Jogo salvo");
                                                   printf("\n\n");
                                                   system("pause");
                                                   system("cls");
           case 3:
                                                                if(player.arma==0)
                                                   {
                                                       printf("Voce amaldicoa sua escolha de armas, pois sabe que espadas nao ferem o couro duro do *Crusher*.\nHa apenas um modo de mata-lo: fazendo ele cair ao chao, para que seu equilibrio delicado seja totalmente destruido e para que seja impossivel para ele levantar-se novamente.\n");
                                                       printf("Voce tera que golpear suas pernas e ao mesmo tempo evitar seu aperto fatal. \nEntretanto, a espada escolhida possui um metal leve e muito resistente, o que aumenta seus dados de HABILIDADE.\n");    
    
                                                            printf("\n\n");
                                                            system("pause");
                                                            system("cls");

                                                       printf("\nJogue o dado para saber quantos pontos voce ganha neste status.\n");

                                                       r1= dado();
                                                       player.habi=player.habi + r1;

                                                       printf("Agora voce possui %d pontos de HABILIDADE", player.habi);
                                                   }else
                                                     {
                                                       if(player.arma==1)
                                                       {
                                                          printf("Decisao ousada, nobre guerreiro. Nao eh sempre que um lutador prefere usar a arma forjada para os servos de Poseidon em uma batalha na terra, o que torna uma decisao tao burra quanto inusitada.\n");
                                                          printf("Para compensar sua falta de inteligencia jogue o dado mais uma vez para que seus pontos de SORTE sejam acrescidos e vermos se pelo menos sua sorte o permite sobreviver.\n");
                                                          r1=dado();
                                                          player.sorte=player.sorte+r1;
                                                          
                                                          printf("\nAgora voce possui %d pontos de SORTE", player.sorte);
                                                       }
                                                    }
    
      VILAO crusher;
      crusher.habi=10;
      crusher.energia=15;
        printf("\n\n");
        system("pause");
        system("cls");
        
        
                                                     if(batalha(&player.sorte, &crusher.energia, &player.energia, player.habi, crusher.habi)==0)
                                                   {
                                                       printf("\n“O Crusher consegue pegar seu braco da espada e o quebra como se fosse um galho fino. \nSem solta-lo, segura seu pescoco com o outro barco. Ele torce seu pescoco com a mesma facilidade e infelizmente voce vem a falecer\n");
                                                           player=guarda;
                                                            player.local=3;
                                                            player.arma=arma;
                                                           salvar(&player);
                                                           printf("\n\n");
                                                           system("pause");
                                                           system("cls");
                                                           gameover();
                                                           break;
                                                   }else 
                                                   {
                                                       printf("\nVoce mergulha na perna do Bonecrusher com uma destreza incrivel, brandindo sua espada no ar.\n");
                                                       printf("Seu quinto golpe rompe os tendoes atras de seu joelho direito e o Bonecrusher desaba desamparado no chao. Ofegando pesadamente de fadiga e alivio, voce eh levado de volta a sua cela\n");
                                                   }
                                                           printf("\n\n");
                                                           system("pause");
                                                           system("cls");
    
                                                       printf("\nAo fim do dia, somente mais uma pessoa retoma a sua cela. Eh um oriental com cara de mau, que parece que o mataria por duas moedas de cobre.\n");
                                                       printf("Assim que a luz rapidamente esmaece, um guarda grita um comando inesperado.\n");
                                                       printf("\n\n-Restaram agora dois de voces em cada cela. Pela manha, eu quero somente um saindo para o combate de amanha. Durmam bem\n");

                                                     player.local=4;
                                                        salvar(&player);
                                                     printf("\n\n");
                                                     system("pause");
                                                     system("cls");
                                                        printf("Jogo salvo");
                                                     printf("\n\n");
                                                     system("pause");
                                                     system("cls");

           case 4:                                   printf("\nO guarda gargalha de sua piada, e antes mesmo que tivesse terminado, o oriental mergulha sobre voce, brandindo um alfinete comprido e afiado, que estava oculto em sua faixa.\nDesarmado, voce tem que lutar ate a morte.");
                                                      oriental();
                                                         printf("\nJogue dois dados\n");

                                                         r1=dado();
                                                         r2=dado();
                                                         resultado= r1+r2;

                                                         if(resultado>player.habi)
                                                         {
                                                             printf("\nAssim que entra num bom ritmo, sua mente para e voce fica imovel em vez de se agachar.\n");
                                                                   printf("\n\n");
                                                                   system("pause");
                                                                   system("cls");
                                                             printf("\n A lamina comprida e afiada mergulha profundamente em sua garganta e voce desaba no chao da arena.\n");
                                                                   printf("\n\n");
                                                                   system("pause");
                                                                   system("cls");
                                                             printf("\n\n\t\t MAIS UM CONCORRETE ELIMINADO");
                                                                   player=guarda;
                                                                   player.local=4;
                                                                   salvar(&player);
                                                                   printf("\n\n");
                                                                   system("pause");
                                                                   system("cls");
                                                            gameover();
                                                           break;
                                                         } 
     
                                                              cap41();

                                                                  printf("\n\n");
                                                                  system("pause");
                                                                  system("cls");

                                                         printf("\nAgora eh sua vez de batalhar, decida qual sera seu proximo passo\n");   

                                                         player.local=5;
                                                        salvar(&player);
                                                        printf("\n\n");
                                                     system("pause");
                                                     system("cls");
                                                        printf("Jogo salvo");
                                                     printf("\n\n");
                                                     system("pause");
                                                     system("cls");  

            case 5:

                                                                do
                                                         {

                                                         printf("\n\n\t\t\t========ATENCAO=====\n\n");
                                                         printf("\t==========Se tomar a decisao errada apartir daqui voce vai PERDE O SAVE=============\n\n\n");

                                                          printf("\t               8)Dar um passo para frente \n");
                                                          printf("\n4)Dar um passo para sua esquerda                    6)Dar um passo para direita\n");
                                                          printf("\t\n                                2)Ficar parado\n");
    
	                                                     scanf("%d", &escolha);
    
                                                         switch (escolha)
                                                         {
                                                         case 8:printf("\nVoce escolheu (8)\n");
                
                                                                printf("Dar um passo para frente\n");

                                                                printf("\n\n");
                                                                system("pause");
                                                                system("cls");
           
                                                                printf("\nVoce caminha lentamente e entao para para ouvir de novo. Nao escuta nada, e decide andar na direcao oposta, onde acidentalmente acaba pisado em um objeto  estranho.\n");
                                                                printf("Com seus pes desnudos voce sente um objeto gelado penetrando a grossa camada de calos em seus pes, e ao olhar pra baixo percebe que aquilo se trata nada mais nada menos que uma mina terrestre interligada com todo o sistema de ventilacao da arena, \ne por ironia do destino e uma pessima engenharia todos ali presentes nunca foram mais vistos.\n");
            
                                                                printf("\n\n");
                                                                system("pause");
                                                                system("cls");
                                                               
                                                               printf("Infelizmente voce nao tomou uma boa decisao\n");
                                                               printf("Tenha mais sorte da proxima vez");

                                                           
                                                                 player=guarda; 
                                                                 player.local=0;
                                                                 salvar(&player);
                                                                 printf("\n\n");
                                                                 system("pause");
                                                                 system("cls");
                                                                 gameover();
                                                                 printf("Voce perdeu seu SAVE");
                                                                 printf("\n\n");
                                                                 system("pause");
                                                                 system("cls");
                                                               
                                                               game=0;
                                                    
                                                                break;
        
                                                         case 2:printf("\nVoce escolheu (2)\n");
                                                                arma=1;
                                                                printf("Ficar parado\n");

                                                                printf("\n\n");
                                                                system("pause");
                                                                system("cls"); 

                                                                printf("\nAtitude inusitada, entretanto fatal. Ficar parado em meio a um campo de batalha eh como se tornar um grande e facil alvo para todos a sua volta, tal qual um porco esperando para o abate. Infelizmente nao sera desta vez que voce conquistara sua liberdade\n");
           
                                                               printf("\n\n");
                                                                system("pause");
                                                                system("cls");
                                                               
                                                               printf("Infelizmente voce nao tomou uma boa decisao\n");
                                                               printf("Tenha mais sorte da proxima vez");

                                                                printf("\n\n");
                                                                system("pause");
                                                                system("cls");
                                                                 player=guarda;
                                                                 player.local=0;
                                                                 salvar(&player);
                                                                 gameover();
                                                                 
                                                                 printf("Voce perdeu seu SAVE");
                                                                 printf("\n\n");
                                                                 system("pause");
                                                                 system("cls");
                                                               
                                                               game=0;

                                                                break;
                                                         case 4:printf("\nVoce escolheu (4)\n"); //sair; 
                                                                printf("Dar um passo para sua esquerda\n");

                                                                printf("\n\n");
                                                                system("pause");
                                                                system("cls");
           
                                                               printf("\nVoce lentamente da um passo para a esquerda, esticando as orelhas para notar algum movimento. \nDe repente, ouve um grito agoniado e um barulho surdo, na hora em que dois corpos caem no chao, o primeiro perto, a sua frente, e o segundo, o seu, estirado ao chao sem vida, somente com o arrependimento e o saber de que uma minima decisao foi necessaria para encerrar toda uma jornada que poderia ter sido gloriosa.\n");
                                                                
                                                                printf("\n\n");
                                                                system("pause");
                                                                system("cls");
                                                               
                                                               printf("Infelizmente voce nao tomou uma boa decisao\n");
                                                               printf("Tenha mais sorte da proxima vez");

                                                                printf("\n\n");
                                                                system("pause");
                                                                system("cls");
                                                                player=guarda;
                                                                 player.local=0;
                                                                 salvar(&player);
                                                                 printf("\n\n");
                                                                 system("pause");
                                                                 system("cls");
                                                                 gameover();
                                                                 printf("Voce perdeu seu SAVE");
                                                                 printf("\n\n");
                                                                 system("pause");
                                                                 system("cls");
                                                               
                                                               game=0;

                                                             break;
                                                         case 6:printf("\nVoce escolheu (6)\n");
                                                                printf("Dar um passo para direita");
  
                                                             break;
        
                                                         default:printf("\nERRO na escolha\n");
                                                                 system("cls");
                                                                 break;
                                                         }
                                                         }while(escolha!=6 && escolha!=2 && escolha!=8 && escolha!=4);

                                                         if(escolha!=6) break;



                                                                printf("\n\n");
                                                                system("pause");
                                                                system("cls");

                                                         printf("\nAo virar a direita voce se depara com 3 dos seus 4 inimigos derrotados, estirados ao chao sem vida depois de uma fervorosa batalha, mas todos derrotados pelo prisioneiro \n*CAMPEAO DO CAOS*.\n");

                                                                caos();

                                                         printf("\n\nPor sorte ele se encontra de costas para voce tentando localizar seu cheiro, teste A sua sorte .\n\n");


                                                        if(Tsorte(&player.sorte)==0)
                                                        {
                                                         
                                                          printf("\nInfelizmente a sorte deixou de ser sua companheira de longa data e voce foi atingido assim que voce decidiu desafia-la mais uma vez, mas o destino tem outra companheira para lhe apresentar\n");
                                                                printf("\n\n");
                                                                system("pause");
                                                                system("cls");
                                                         printf("\n Ela possui muitos nomes\n");
                                                                printf("\n\n");
                                                                system("pause");
                                                                system("cls");
                                                         printf("\nem muitas linguas diferentes\n");  
                                                                printf("\n\n");
                                                                system("pause");
                                                                system("cls");
                                                         printf("\nE caminhara contigo a partir de agora\n");
                                                                printf("\n\n");
                                                                system("pause");
                                                                system("cls");
                                                         printf("\nlhe apresento...\n");         
                                                                printf("\n\n");
                                                                system("pause");
                                                                system("cls");
                                                         printf("\nA MORTE\n");
                                                                morteBIG();
                                                                gameover();

                                                                 player=guarda;
                                                                 player.local=0;
                                                                 salvar(&player);
         ;
                                                                 printf("Voce perdeu seu SAVE");
                                                                 printf("\n\n");
                                                                 system("pause");
                                                                 system("cls");
                                                              
                                                              break;
                                                        }
                                                                printf("\n\n");
                                                                system("pause");
                                                                system("cls");  

  

          case 6: 
                                                                                                                  player.local=6;
                                                     salvar(&player);
                                                     printf("\n\n");
                                                     system("pause");
                                                     system("cls");
                                                     printf("Jogo salvo");
                                                     printf("\n\n");
                                                     system("pause");
                                                     system("cls"); 
                                                     
        VILAO campeaodocaos;
    campeaodocaos.energia=17;
    campeaodocaos.habi=12;                                                 
                                                     
                                                                   printf("\n CAMPEAO DO CAOS eh atingido e toma um golpe critico, que o atordoe e o enfraquece, mas nao ache que a vitoria esta garantida, pois esta eh uma das criaturas mais fortes ja vistas.\n");
          
                                                                    printf("\n\n");
                                                                    system("pause");
                                                                    system("cls");

                                                            printf("\nAgora se prepare, pois voce lutara por algo muito maior que qualquer tesouro.\n");       

                                                                    printf("\n\n");
                                                                    system("pause");
                                                                    system("cls");

                                                            printf("\n\t\tA sua LIBERDADE\n");

                                                                    printf("\n\n");
                                                                    system("pause");
                                                                    system("cls");

                                                            if(batalha(&player.sorte, &campeaodocaos.energia, &player.energia, player.habi, campeaodocaos.habi)==0)
                                                            {
                                                                    printf("\n\n");
                                                                    system("pause");
                                                                    system("cls");

                                                                 printf("\nVoce lutou bravamente, meu nobre guerreiro. Infelizmente nao conseguiu sobreviver.\n");
                                                                   printf("\n\n");
                                                                    system("pause");
                                                                    system("cls");
                                                                 gameover();
                                                                 player=guarda;
                                                                 player.local=0;
                                                                 salvar(&player);
                                                                 
                                                                 printf("Voce perdeu seu SAVE");
                                                                 printf("\n\n");
                                                                 system("pause");
                                                                 system("cls");
                                                               
                                                               break;

                                                            }else{
                                                              printf("\n\n");
                                                                    system("pause");
                                                                    system("cls");

                                                                 printf("\nVoce lutou bravamente, meu nobre guerreiro.\n");
                                                                    printf("\n\n");
                                                                   system("pause");
                                                                    system("cls");

                                                                 printf("\nConseguiu passar por todos as etapas e sobreviver. Voce merece a coroa da vitória e tera a sua tao sonhada liberdade. \n");
                                                                    printf("\n\n");
                                                                    system("pause");
                                                                    system("cls");
                                                                   
																                                                                                                              
                                                                 }
        case 7:   win();
                  player.local=7;
                  salvar(&player);
                  printf("\nESSE JOGO VALE 10!!!\n");
                  printf("\n\n");
                  system("pause");
                  system("cls");
                  game=0;
                  break;
                                                                 
    }
}
    printf("\n\n\n\n\n\n");
    
	printf("===================OBRIGADO POR JOGAR=========================");
    
	printf("\n\n\n\n\n\n");
    system("pause");
 
}

int escolha()
{
	char r;
	printf("\nGostaria de testar sua SORTE?\n\n");
	printf("\nDigite s, se SIM ou n se NAO\n\n");
	r= getch();

	if(r=='s') return 1;
    else return 0;
}

int dado()
{     //ok
    printf("Aperte ENTER para rolar o D6\n");
   char c;
   int resultado;
	do
	{
		c= getch();
	}while (c!=13);
    
    srand(time(NULL));
    resultado=rand()%6;
    if(resultado==0) resultado=1;

   printf("\nO resultado foi:\t\a%d\n", resultado);

   return resultado;
}
int FAinimingo(int Hinimigo)
{
int fi;
     printf("\nVamos medir a FORCA DO INIMIGO\n");

	int rDADO1, rDADO2;

	rDADO1=dado();
    rDADO2=dado();

   fi=(rDADO1+rDADO2)+Hinimigo;
   printf("\n\nO inimigo tem %d de FORCA DE ATAQUE\n\n", fi);
   return fi;
}
int FAheroi(int Hheroi) // OK
{
        printf("\nVamos medir a sua FORCA\n");
	int fh;
	int rDADO1, rDADO2;
	rDADO1=dado();
	rDADO2=dado();

	fh=(rDADO1+rDADO2)+Hheroi;
    printf("Voce tem %d de FORCA DE ATAQUE\n\n", fh);
	return fh;
}
int Tsorte(int *SORTEh)// ==1 sorte ==0 azar   OK
{
	printf("\nVamos testar a sua SORTE, role dois D6\n\n");
	int rDADO1, rDADO2;
	rDADO1= dado();
	rDADO2= dado();

	if((rDADO1+rDADO2)<=*SORTEh)
	{
		printf("\aParece que voce esta com sorte hoje\n");
		*SORTEh=*SORTEh-1;
		return 1;
	}else{
		printf("\aParece que voce nao esta com sorte hoje\n");
		*SORTEh=*SORTEh-1;
		return 0;
	}
}
int batalha(int *SORTEh, int *ENERGIAi, int *ENERGIAh, int HABheroi, int HABinimigo)
{  
	int fini, fher;
	int i=1;
	while (*ENERGIAh>0)
	{
		printf("Rodada %d\n\n", i);
		printf("\n O inimigo tem %d de VIDA\n Voce possui %d de VIDA\n", *ENERGIAi, *	ENERGIAh);

		fini=FAinimingo(HABinimigo);
		fher=FAheroi(HABheroi);
		system("pause");
		system("cls");
		printf("\nPODER INIMIGO:\t %d\n", fini);
		printf("\nPODER HEROI:\t %d\n", fher);
		system("pause");
		system("cls");
		
		if(fher>fini)
		{
			printf("Voce foi mais forte que o inimigo\n\n");
			*ENERGIAi=*ENERGIAi-2;
			if(escolha()==1)
			{
				if(Tsorte(&(*SORTEh))==1)
				{
					*ENERGIAi=*ENERGIAi-2;
					printf("\nVoce causou 4 de dano\n");
				}else *ENERGIAi=*ENERGIAi+1;
			}else printf("\nVoce causou 2 de dano\n");
		}else
		   {
			if(fher<fini)
			{
				printf("\nVoce levou uma LAPADA SECA do inimigo\n");
				*ENERGIAh=*ENERGIAh-2;
				if(escolha()==1)
			    {
				     if(Tsorte(&(*SORTEh))==1)
				      {
					     *ENERGIAh=*ENERGIAh+1;
					     printf("\nVoce tomou 1 de DANO\n");
				     }else 
				        {
					        *ENERGIAi=*ENERGIAi-1;
					        printf("\nVoce tomou 3 de DANO\n");
				        }
			    }else printf("\nVoce levou 2 de DANO\n");

			}else printf("Empate\n");
		   }
		i=i+1;
		system("pause");
		system("cls");
		
		if(*ENERGIAi<=0) return 1;
	}
	
	system("pause");
	system("cls");
	return 0;
	
}


void novogame(HEROI *jogador)
{
    int rDADO1, rDADO2;
    jogador->local=0;
    printf("Digite seu nome nobre aventureiro(a,e):\t");
    scanf("%s", jogador->nome);
    
    printf("\n\n");
    printf("\aAntes de embarca na aventura %s, voce deve primeiro determinar seus pontos de habilida, energia e sorte.\n", jogador->nome);
    system("pause");
    system("cls");

    printf("Primeiro vamos medir a sua HABILIDADE. (resultado do dado +6 pontos extras):\n");
    printf("Role um d6 para medir a sua habilidade. \n\n");

    rDADO1=dado();
    if(rDADO1==0) rDADO1=1;
    printf("\n");
    jogador->habi= rDADO1+6;
    printf("\aVoce tem %d de HABILIDADE.\n", jogador->habi);
    
    switch(rDADO1)
    {
        case(1):
        printf("Infelizmente parece que voce nao eh nenhum pouco habilidoso(a,e).");
        break;
        case(2):
        printf("Infelizmente parece que voce nao eh habilidoso(a,e).");
        break;
        case(3):
        printf("Parece que voce eh pouco habilidoso(a,e).");
        break;
        case(4):
        printf("Parece que voce eh habilidoso(a,e).");
        break;
        case(5):
        printf("Parece que voce eh bem habilidoso(a,e).");
        break;
        case(6):
        printf("Nossa, parece que voce realmente eh muito habilidoso(a,e).");
        break;
    }
    printf("\n\n");
    system("pause");
    system("cls");
    
    printf("\nVamos verificar seus pontos de ENERGIA, role dois dados. (resultado dos dados +12 pontos extras)\n\n");
    
    rDADO1=dado();
    printf("\nProximo dado.\n");
    rDADO2=dado();
    jogador->energia= (rDADO1+rDADO2)+12;
    printf("\n\aVoce tem %d pontos de ENERGIA.", jogador->energia);
    printf("\n\n");
    system("pause");
    system("cls");

    printf("\n\aAgora finalmente vamos medir a sua SORTE, role um dado. (resultado do dado +8 pontos extras)\n");

    rDADO1=dado();
    jogador->sorte=rDADO1+8;
    printf("\n\aVoce tem %d pontos de SORTE.", jogador->sorte);

    switch(rDADO1)
    {
        case(1):
        printf(" Nem 2 trevos de 4 folhas e um pe de coelho te ajudaria com essa sorte.");
        break;
        case(2):
        printf(" Nossa senhora, voce passou debaixo de quantas escadas?.");
        break;
        case(3):
        printf(" Parece que voce eh uma pessoa normal.");
        break;
        case(4):
        printf(" Parece que voce tem uma sorte ok.");
        break;
        case(5):
        printf(" Parece que voce tem um trevo de 4 folhas no bolso.");
        break;
        case(6):
        printf(" Nossa, eh daqui pra loteria.");
        break;
    }
    printf("\n\n");
    system("pause");
    system("cls");

    printf("\nMeu nobre aventureiro(a,e), voce tem:\n");
    printf("\t\a %d de HABILIDADE.\n", jogador->habi);
    system("pause");
    printf("\t\a %d de ENERGIA.\n", jogador->energia);
    system("pause");
    printf("\t\a %d de SORTE.\n", jogador->sorte);
}
void salvar(HEROI *jogador)
{
    FILE *save;
    save= fopen("save.dat", "w+b");

    fwrite(&(*jogador), sizeof(HEROI), 1, save);
    fclose(save);
}
void salvarG(HEROI *jogador)
{
    FILE *save;
    save= fopen("guarda.dat", "wb");

    fwrite(&(*jogador), sizeof(HEROI), 1, save);
    fclose(save);
}
HEROI abrirsalve()
{
	HEROI jogador;
    FILE *save;
    save= fopen("save.dat", "r+b");

    while(!feof(save))
    {
        while(fread(&jogador, sizeof(HEROI), 1, save));
        
    }
    fclose(save);
    system("cls");
    return  jogador;
}
HEROI abrirguarda()
{
	HEROI jogador;
    FILE *save;
    save= fopen("guarda.dat", "r+b");

    while(!feof(save))
    {
        while(fread(&jogador, sizeof(HEROI), 1, save));
        
    }
    fclose(save);
    system("cls");
    return  jogador;
}
void capa()
{
	FILE *img;
	
	img= fopen("capa.txt", "rt");
	char ascii[500];
	while(fgets(ascii, 500, img)) printf("%s", ascii);
			printf("\n\n");
	
	fclose(img);
}
void caveira()
{
		FILE *img;
	
	img= fopen("caveira.txt", "rt");
	char ascii[500];
	while(fgets(ascii, 500, img)) printf("%s", ascii);
			printf("\n\n");
	system("pause");
	system("cls");
	printf("\n");
	fclose(img);
}
void morteBIG()
{
	FILE *img;
	
	img= fopen("morte bigbig.txt", "rt");
	char ascii[500];
	while(fgets(ascii, 500, img)) printf("%s", ascii);
		printf("\n\n");
	system("pause");
	system("cls");
	printf("\n");
	fclose(img);
}
void crusherBIG()
{
	FILE *img;
	
	img= fopen("crusher big big.txt", "rt");
	char ascii[500];
	while(fgets(ascii, 500, img)) printf("%s", ascii);
		printf("\n\n");
	system("pause");
	system("cls");
	printf("\n");
	fclose(img);
}
void gameover()
{
	FILE *img;
	
	img= fopen("gameover.txt", "rt");
	char ascii[500];
	while(fgets(ascii, 500, img)) printf("%s", ascii);
		printf("\n\n");
	system("pause");
	system("cls");
	printf("\n");
	fclose(img);
}
void guerreiro()
{
		FILE *img;
	
	img= fopen("guerreiro.txt", "rt");
	char ascii[500];
	while(fgets(ascii, 500, img)) printf("%s", ascii);
		printf("\n\n");
	system("pause");
	system("cls");
	printf("\n");
	fclose(img);
}
void navio()
{
   	FILE *img;
	
	img= fopen("navio.txt", "rt");
	char ascii[500];
	while(fgets(ascii, 500, img)) printf("%s", ascii);
		printf("\n\n");
	system("pause");
	system("cls");
	printf("\n");
	fclose(img);
}
void oriental()
{
      	FILE *img;
	
	img= fopen("oriental.txt", "rt");
	char ascii[500];
	while(fgets(ascii, 500, img)) printf("%s", ascii);
		printf("\n\n");
	system("pause");
	system("cls");
	printf("\n");
	fclose(img);
}
void caos()
{
         	FILE *img;
	
	img= fopen("caos.txt", "rt");
	char ascii[500];
	while(fgets(ascii, 500, img)) printf("%s", ascii);
		printf("\n\n");
	system("pause");
	system("cls");
	printf("\n");
	fclose(img);
}
void win()
{
         	FILE *img;
	
	img= fopen("win.txt", "rt");
	char ascii[500];
	while(fgets(ascii, 500, img)) printf("%s", ascii);
		printf("\n\n");
	system("pause");
	system("cls");
	printf("\n");
	fclose(img);
}
void cap0(){
     FILE *fp;
    char texto[1001];

    fp= fopen("0.txt", "rt");

    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);

                  printf("\n\n");
                  system("pause");
                  system("cls");

    fgets(texto, sizeof(texto), fp);
     printf("%s\n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s\n", texto);
    
    caveira();

    fgets(texto, sizeof(texto), fp);
     printf("%s\n", texto);
    
    navio();
                  
    fgets(texto, sizeof(texto), fp);
     printf("%s\n", texto);
                  
                  printf("\n\n");
                  system("pause");
                  system("cls");

    fgets(texto, sizeof(texto), fp);
     printf("%s\n", texto);
                  
                  printf("\n\n");
                  system("pause");
                  system("cls");

     fgets(texto, sizeof(texto), fp);
     printf("%s\n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s\n", texto); 

                  printf("\n\n");
                  system("pause");
                  system("cls");

    fgets(texto, sizeof(texto), fp);
     printf("%s\n", texto);
                 
                  printf("\n\n");
                  system("pause");
                  system("cls");

     fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);

                  printf("\n\n");
                  system("pause");
                  system("cls");

    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);

    fclose(fp);
}
void cap11()
{
        FILE *fp;
    char texto[1001];

    fp= fopen("11.txt", "rt");


    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);

            printf("\n\n");
            system("pause");
            system("cls");

    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);

            printf("\n\n");
            system("pause");
            system("cls"); 
     
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);   

            printf("\n\n");
            system("pause");
            system("cls");

    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);                      
    
    

    fclose(fp);
}
void cap12()
{
        FILE *fp;
    char texto[1001];

    fp= fopen("12.txt", "rt");


    fgets(texto, sizeof(texto), fp);
    printf("%s \n", texto);
     fgets(texto, sizeof(texto), fp);
    printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
     printf("%s \n", texto);
    
    
    fclose(fp);
}
void cap21()
{
      FILE *fp;
    char texto[1001];

    fp= fopen("21.txt", "rt");


    fgets(texto, sizeof(texto), fp);
    printf("%s \n", texto);
     fgets(texto, sizeof(texto), fp);
    printf("%s \n", texto);
   
   crusherBIG();
   
    fgets(texto, sizeof(texto), fp);
    printf("%s \n", texto);
    
    
    fclose(fp);
}
void cap41()
{
        FILE *fp;
    char texto[1001];

    fp= fopen("41.txt", "rt");


    fgets(texto, sizeof(texto), fp);
    printf("%s \n", texto);

        printf("\n\n");
        system("pause");
        system("cls");
    
    fgets(texto, sizeof(texto), fp);
    printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
    printf("%s \n", texto);
    fgets(texto, sizeof(texto), fp);
    printf("%s \n", texto);
    
    fclose(fp);
}
