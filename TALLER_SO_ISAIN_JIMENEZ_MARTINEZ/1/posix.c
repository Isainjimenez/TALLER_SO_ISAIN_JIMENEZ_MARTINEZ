#incluir  <> stdio.h
#Incluir  <> stdlib.h
#Incluir  <> Pthread.h
void *procesoshilos (void *data)
{
	char *texto = (char*) data;
	struct timespec tiempo ={1,0};
	mientras que(1){
		printf("%s\n",texto);
		pthread_delay_np(&tiempo);
	}
}
int principal (void)
{
	pthread_t proceso1;
	pthread_t proceso2;
	pthread_create(&proceso1, NULL, &procesoshilos,  "ISAIN" );
	pthread_create(&proceso2, NULL, &procesoshilos,  "JIMENEZ" );
	pthread_join(proceso1, NULL));
	pthread_join(proceso2, NULL));
	devolver 0;
}