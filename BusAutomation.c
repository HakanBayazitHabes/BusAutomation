#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
int OgrenciDakika=07,rows,rows1,sayac3=0,num,num1,sayac4=0,sefer_sec1,rezerv;
int sayac=0,SeferSaat[100],SeferDakika[100],decimal=0,a1,b1,sayac6=0,dizi[100],varisSaati[100],varisDakikasi[100],kapasite[100],uzunluk=2,Koltuk_no[100];
char a[100],b[100],sefer_Dizi[100],kullanici[100],kod1[100], kod2[100], kod4[100],kod3[100],kod5[100],kod6[100];
char ad[20][20],soyad[20][20],onay,rezerve_yap[4],rezerve_tut[4],kodun[3];

   void personelSayi(int yolcu)
   {
   if(yolcu>=30)
      {
         printf("3 personel calismaktadir.\n");
      }
   else
      {
         printf("2 personel calismaktadir.\n");
      }
   }
   int personelSayi1(int personel)
   {

   if(personel>=30)
      {
         return 3;
      }
   else
      {
         return 2;
      }
   }
   void seferNo(int seferno)
   {
  srand(time(NULL));
  for(int i=0;i<sayac;i++)
  {
   kod1 [i] = rand()%6+10;
   kod2 [i]= rand()%8*2;
   kod4 [i]= rand()%16;

   printf("67%X%X%X%X\n",kod1[i], kod2[i], kod1[i], kod4[i]);
  }
   }
   void SeferVarisSaati(int saat)
   {
   Git:for(int i=sayac-1;i<sayac;i++)
         {
            printf("Lutfen sefer saatini giriniz:");
            scanf("%d",&SeferSaat[i]);

            printf("Lutfen sefer dakikasini giriniz:");
            scanf("%d",&SeferDakika[i]);

        if((SeferSaat[i]>=0 && SeferSaat[i]<24) && (varisSaati[i]>=0 && varisSaati[i]<24) && (SeferDakika[i]>=0 && SeferDakika[i]<=60) && (varisDakikasi[i]>=0 && varisDakikasi[i]<=60) )
          {
            if(SeferDakika[i]!=OgrenciDakika)
            {
               printf("Sefer bu saatte gerceklesemez.\nGerceklesecek Sefer Saatiniz=%d.%d\n",SeferSaat[i],OgrenciDakika);
            }
           else
            {
               printf("Gerceklesecek Sefer Saatiniz=%d.%d\n",SeferSaat[i],SeferDakika[i]);
            }
               printf("Tahmini varis Saatini yaziniz:");
               scanf("%d",&varisSaati[i]);

               printf("Tahmini varis dakikasini giriniz:");
               scanf("%d",&varisDakikasi[i]);

               printf("Gerceklesecek Sefer Saatiniz=%d.%d\n",varisSaati[i],varisDakikasi[i]);
          }
        else
           {
               printf("Lutfen saat ve dakikayi tekrar giriniz.\n");
               goto Git;
           }
         }
     }
   void rezerve_No(int rezervasyon)
   {
    srand(time(NULL));
    for(int i=sefer_sec1-1;i<sefer_sec1;i++)
     {
      kod1 [i] = rand()%6+10;
      kod2 [i]= rand()%8*2;
      kod4 [i]= rand()%16;
      kod3 [i]= rand()%6+10;
      kod5 [i]= rand()%8*2;
      kod6 [i]= rand()%16;
      printf("%X%X%X%X%X%X%X%X\n",kod4[i], kod6[i], kod1[i], kod2[i], kod5[i], kod3[i], kod1[i], kod4[i]);
     }
   }
   void sefer_gosterimi(int sefergoster)
   {
      int matris[(rows/4)+1][4];
      for(int i=sefer_sec1-1;i<sefer_sec1;i++)
             {
               a1=Koltuk_no[i]/4;
               b1=Koltuk_no[i]%4;
               rows1=kapasite[i]%4;

               rows=kapasite[i];
               num =kapasite[i]/4;
               num1= num +1;
             }
               printf("      1       2            3       4 \n");
               printf("     ---     ---          ---     ---\n");
            for(int i=0;i<num1;i++)
            {
              printf("%2d.",i+1);

              if(i!=num)
              {
               for(int j=0;j<4;j++)
                {
                     sayac4++;

                if(a1==i && b1-1==j)
                  {
                     printf("  [X]   ",matris[i][j]);
                  }
               else if(a1==i+1 && b1==j-3)
                  {
                     printf("  [X]   ",matris[i+1][j-3]);
                  }
               else
                  {
                     printf("  [ ]   ");
                  }
               if(sayac4==2)
                  {
                     printf("     ");
                  }
               else if(sayac4==4)
                  {
                     sayac4=0;
                     printf("\n");
                  }
                }
              }
             else if(rows1!=0)
              {
                 for(int j=0;j<rows1;j++)
                 {
                    sayac3++;
                    if(a1==i && b1-1==j)
                    {
                       printf("  [X]   ",matris[i][j]);
                    }
                    else
                    {
                       printf("  [ ]   ");
                    }
                    if(sayac3==2)
                     {
                       printf("     ");
                     }
                  }
               }
            }
   }
   void Menu1(int menu2){
      printf("         \n\n ANA MENU\n          1.FIRMA GIRISI\n          2.MUSTERI GIRISI\n          3.CIKIS\n      Lutfen bir giris yapiniz.\n");
   }
   void Menu2(int menu3){
      printf("1-Otobus Ekle\n2-Sefer Bilgisi Ekle\n3-Sefer/Koltuk Bilgisi\n4-Bir Ust Menuye Don\n");
   }
   void Menu3(int menu4){
      printf("1-Seferleri Listele\n2-Sefer Rezervasyon Yap\n3-Bir Ust Menuye Don\n4-Rezervasyon Goster\n");
   }
int main()
{
    int giris,otobus_Ek,otobusNumber,SeFerNumara,Oto_Girdi,sayac1=0,rezerve_sec,sefer,sefer_sec,sefer_ek,sefer_gor,menu2,menu3,menu4;
    char otobus_Modeli[100][100],Baslangic_Sehri[100][100],Varis_Sehri[100][100];
    float Toplam_Hasilat[100];

  Menu:   Menu1(menu2);
         scanf("%d",&giris);

   if(giris==1)
    {
      Git3:  Menu2(menu3);
            scanf("%d",&otobus_Ek);

       if(otobus_Ek==1)
        {
             sayac++;

           for(int i=sayac-1;i<sayac;i++)
            {
                printf("Otobusun Kapasitesini giriniz\n");
                scanf("%d",&kapasite[i]);

                printf("Girmis oldugunuz otobus kapasitesi:%d\n",kapasite[i]);

             if(kapasite[i]>30)
              {
                printf("Secmis oldugunuz koltuk kapasitesi ,uzun yol otobusune aittir.\n");
              }
             else
              {
                printf("Secmis oldugunuz koltuk kapasitesi,kisa yol otobusune aittir.\n");
              }
                printf("\nOtobusun modelini giriniz:");
                scanf("%s",&otobus_Modeli[i]);

                printf("Girmis oldugunuz otobus modeli:%s\n",otobus_Modeli[i]);
            }
          for(int i=sayac-1;i<sayac;i++)
            {
                dizi[i]=sayac;
                printf("Otobus numarasi=%d\n",sayac);
                personelSayi(kapasite[i]);
            }
                printf("\n");
            goto Git3;
        }
      else if(otobus_Ek==2)
       {
            printf("Sefer Numaraniz=");
            seferNo(SeFerNumara);

            printf("\n");
            printf("Kullanmak istediginiz otobusu giriniz.\n");
        for(int i=sayac-1;i<sayac;i++)
          {
            dizi[i]=sayac;
          }
        for(int i=0;i<sayac;i++)
          {
            printf("%d. Otobus  ",dizi[i]);
          }
            printf("\n");
            scanf("%d",&Oto_Girdi);
            printf("%d.Otobusu girdiniz.\n",Oto_Girdi);

        for(int i=Oto_Girdi-1;i<Oto_Girdi;i++)
          {
            printf("%d. Otobusun Kapasitesi=%d\n%d. Otobusun Modeli:%s\n",i+1,kapasite[i],i+1,otobus_Modeli[i]);
            personelSayi(kapasite[i]);
          }
               printf("\n");

       Git6:     SeferVarisSaati(sefer);
                printf("\n");

         for(int i=sayac-1;i<sayac;i++)
           {
            int saat=varisSaati[i]-SeferSaat[i];
            int dakika=varisDakikasi[i]-OgrenciDakika;

        if(saat>4)
         {
            if(personelSayi1(kapasite[i])==3)
            {
               if(saat>=0 && dakika>=0)
               {
                 printf("Yolculuk %d saat %d dakikadir.\n",saat,dakika);
               }
              else if(saat>0 && dakika<0)
               {
                 int sayi=(saat*60);
                 sayi +=dakika;
                 int sayi1,sayi2;
                 int orijinalsayi=sayi;
               do{
                   sayi1=sayi/60;
                   sayi2=orijinalsayi%60;
                   printf("Yolculuk %d saat %d dakikadir.\n",sayi1,sayi2);
                 }while(5>8);
               }
              else if(saat<0)
              {
                 printf("Lutfen saati tekrar giriniz.\n");
              }
              if(personelSayi1(kapasite)!=3 )
              {
                 printf("Personel Sayisi yetersizdir.\nLutfen yolculuk saatlerini tekrar giriniz.\n");
                 printf("\n");
                 goto Git6;
              }
            }
            else
            {
               printf("Otobus kapasitesi ve yolculuk suresi uymamaktadir.\nLutfen tekrar giriniz.\n");
               goto Git6;
            }
         }
          if(saat>=0 && saat<5)
            {
               if(saat>=0 && dakika>=0)
               {
                 printf("Yolculuk %d saat %d dakikadir.\n",saat,dakika);
               }
              else if(saat>0 && dakika<0)
               {
                 int sayi=(saat*60);
                 sayi +=dakika;
                 int sayi1,sayi2;
                 int orijinalsayi=sayi;
                 do
                  {
                    sayi1=sayi/60;
                    sayi2=orijinalsayi%60;
                    printf("Yolculuk %d saat %d dakikadir.\n",sayi1,sayi2);
                   }while(5>8);
               }
               else if(saat<0)
                {
                  printf("Lutfen saati tekrar giriniz.\n");
                }
            }
          }
               for(int i=sayac-1;i<sayac;i++)
                {
                  printf("\nOtobusun kalkacagi Sehri Giriniz:");
                  scanf("%s",&Baslangic_Sehri[i]);

                  printf("\nBaslangic Sehri %s olarak secildi.\n\nOtobusun varacagi Sehri giriniz:",Baslangic_Sehri);
                  scanf("%s",&Varis_Sehri[i]);

                  printf("\nVaris Sehri %s olarak secildi\n\nBu sefer icin ne kadar bir miktar gerektigini yaziniz:",Varis_Sehri[i]);
                  scanf("%f",&Toplam_Hasilat[i]);

                  printf("\nIstenen Toplam Hasilat=%.2fTL\n%s'den %s'ye gitmesi icin gereken ucret\nMusteri Basi Ucret=%.2fTL\n\n",Toplam_Hasilat[i],Baslangic_Sehri[i],Varis_Sehri[i],Toplam_Hasilat[i]/kapasite[i]);
                }
                 goto Git3;
         }
       else if(otobus_Ek==3)
       {
           for(int i=0;i<sayac;i++)
           {
               printf("%d-67%X%X%X%X\n",i+1,kod1[i],kod2[i],kod1[i],kod4[i]);
           }
             printf("Sefer No?\n");
             printf("Lutfen sefer numaranizi seciniz.\n");
             scanf("%d",&sefer_sec);

             printf("%d. sefer numarasini sectiniz.\n",sefer_sec);

           for(int i=sefer_sec-1;i<sefer_sec;i++)
           {
              rows1=kapasite[i]%4;
              int matris[(kapasite[i]/4)+1][4];
              rows=kapasite[i];
              num =kapasite[i]/4;
              num1= num +1;
           }
             printf("      1       2            3       4 \n");
             printf("     ---     ---          ---     ---\n");
           for(int i=0;i<num1;i++)
           {
              printf("%2d.",i+1);

              if(i!=num)
              {
                 for(int j=0;j<4;j++)
                {
                   sayac4++;
                 printf("  [ ]   ");

                  if(sayac4==2)
                  {
                     printf("     ");
                  }
                  else if(sayac4==4)
                  {
                     sayac4=0;
                     printf("\n");
                  }
                }
              }
             else if(rows1!=0)
              {
                 for(int j=0;j<rows1;j++)
                 {
                    sayac3++;
                    printf("  [ ]   ");
                    if(sayac3==2)
                     {
                       printf("     ");
                     }
                  }
               }
           }
            printf("\n\n");

            for(int i=sefer_sec-1;i<sefer_sec;i++)
            {
               printf("           --Bilgilendirme--\n\n");
               printf(" Toplam Hasilat=%.2fTL\n Musteri Basi Ucret=%.2fTL\n %s'dan %s'e hareket etmektedir.\n Otobus Modeli=%s\n Kalkis Saati=%d.%d  Varis Saati=%d.%d\n Sefer No=67%X%X%X%X\n Otobus No=%d\n Kalan Koltuk Sayisi=%d\n\n",Toplam_Hasilat[i],Toplam_Hasilat[i]/kapasite[i],Baslangic_Sehri[i],Varis_Sehri[i],otobus_Modeli[i],SeferSaat[i],OgrenciDakika,varisSaati[i],varisDakikasi[i],kod1[i],kod2[i],kod1[i],kod4[i],dizi[i],(kapasite[i]-sayac6));
               goto Git3;
            }
          }
       else if(otobus_Ek==4)
        {
            goto Menu;
        }
       }
        else if(giris==2)
         {
       Git2:  Menu3(menu4);
               scanf("%d",&sefer_ek);
         if(sefer_ek==1)
         {
            printf("\n");
            for(int i=0;i<sayac;i++)
            {
               printf("%d- Otobus Sefer No=67%X%X%X%X\n   Toplam Hasilat=%.2fTL\n   Musteri Basi Ucret=%.2fTL\n   %s'dan %s'e hareket etmektedir.\n   Kalkis Saati=%d.%d  Varis Saati=%d.%d\n   Otobus No=%d\n",i+1,kod1[i],kod2[i],kod1[i],kod4[i],Toplam_Hasilat[i],Toplam_Hasilat[i]/kapasite[i],Baslangic_Sehri[i],Varis_Sehri[i],SeferSaat[i],OgrenciDakika,varisSaati[i],varisDakikasi[i],dizi[i]);
            }
            goto Git2;
         }
         else if(sefer_ek==2)
           {
              for (int i=0;i<sayac;i++)
              {
                printf("%d- Otobus Sefer No=67%X%X%X%X\n",i+1,kod1[i],kod2[i],kod1[i],kod4[i]);
              }
                printf("Lutfen sefer numaranizi seciniz.\n");
                scanf("%d",&sefer_sec1);

                printf("%d. sefer numarasini sectiniz.\n",sefer_sec1);

                sefer_gosterimi(sefer_gor);
                printf("\n\n");

              for(int i=sefer_sec1-1;i<sefer_sec1;i++)
             {
                printf("Lutfen isminizi giriniz.\n");
                scanf("%s",&ad[i]);
                printf("Lutfen soyadinizi giriniz.\n");
                scanf("%s",&soyad[i]);
                printf("Lutfen biletini almak istediginiz koltugun numarasini giriniz.\n");
                scanf("%d",&Koltuk_no[i]);
             }
             sefer_gosterimi(sefer_gor);
              printf("\n\n");

               printf("Onayliyor musunuz?[E/H]\n");
               scanf(" %c",&onay);

               if(onay=='H' || onay=='h')
               {
               for(int i=sefer_sec1-1;i<sefer_sec1;i++)
               {
                  ad[i][20]="";
                  soyad[i][20]="";
                  Koltuk_no[i]="";
               }
                  goto Git2;
               }
               else if(onay=='E' || onay=='e')
               {
                  printf("\nBilgileriniz kaydedilmistir.\nRezervasyon No=");
                  rezerve_No(rezerv);
                  sayac6++;
               }
               printf("\n");
               goto Git2;
            }
            else if(sefer_ek==3)
            {
               goto Git3;
            }
            else if(sefer_ek==4)
            {
               for(int i=0;i<sayac;i++)
                {
                   printf("%d-%X%X%X%X%X%X%X%X\n",i+1,kod4[i],kod2[i],kod6[i],kod2[i],kod5[i],kod1[i],kod3[i],kod4[i]);
                }
                   printf("Lutfen Rezervasyon numaranizi seciniz.\n");
                   scanf("%d",&rezerve_sec);

                   for(int i=rezerve_sec-1;i<rezerve_sec;i++)
                   {
                      printf(" %d-Otobus Sefer No=67%X%X%X%X\n   Ad=%s\n   Soyad=%s\n   Toplam Hasilat=%.2fTL\n   Musteri Basi Ucret=%.2fTL\n   Otobus Modeli=%s\n   %s'dan %s'e hareket etmektedir.\n   Kalkis Saati=%d.%d  Varis Saati=%d.%d\n   Kalan Koltuk Sayisi=%d\n   Koltuk Numarasi=%d\n",i+1,kod1[i],kod2[i],kod1[i],kod4[i],ad[i],soyad[i],Toplam_Hasilat[i],Toplam_Hasilat[i]/kapasite[i],otobus_Modeli[i],Baslangic_Sehri[i],Varis_Sehri[i],SeferSaat[i],OgrenciDakika,varisSaati[i],varisDakikasi[i],(kapasite[i]-sayac6),Koltuk_no[i]);
                   }
            }
          }
        else if(giris==3)
        {
           printf("Isleminiz sonlanmistir.Tekrar bekleriz.\n\n");
        }
        else
        {
           printf("Hatali bir giris yaptiniz.");
           goto Menu;
        }
    return 0;
}
