//#include <ESP8266WiFi.h> //essa biblioteca já vem com a IDE. Portanto, não é preciso baixar nenhuma biblioteca adicional
 
/*
* Defines do projeto
*/
//GPIO do NodeMCU que o pino de comunicação do sensor está ligado.
#define pino_sinal_analogico A0
/* defines - wi-fi */
//#define SSID_REDE "francomobile" /* coloque aqui o nome da rede que se deseja conectar */
//#define SENHA_REDE "123456789" /* coloque aqui a senha da rede que se deseja conectar */
//#define INTERVALO_ENVIO_THINGSPEAK 30000 /* intervalo entre envios de dados ao ThingSpeak (em ms) */
 
/* A biblioteca serve para os sensores DHT11, DHT22 e DHT21.
* No nosso caso, usaremos o DHT22, porém se você desejar utilizar
* algum dos outros disponíveis, basta descomentar a linha correspondente.
*/
 

 
/* constantes e variáveis globais */
//char endereco_api_thingspeak[] = "api.thingspeak.com";
//String chave_escrita_thingspeak = "3BN2H4KVBV3QAO6Z";  /* Coloque aqui sua chave de escrita do seu canal */
//unsigned long last_connection_time;
//WiFiClient client;
 
/* prototypes */
//void envia_informacoes_thingspeak(String string_dados);
//void init_wifi(void);
//void conecta_wifi(void);
//void verifica_conexao_wifi(void);
 
/*
* Implementações
*/
 
/* Função: envia informações ao ThingSpeak
* Parâmetros: String com a informação a ser enviada
* Retorno: nenhum
*/

/* void envia_informacoes_thingspeak(String string_dados){
*   if (client.connect(endereco_api_thingspeak, 80))
*   {
*         faz a requisição HTTP ao ThingSpeak 
*        client.print("POST /update HTTP/1.1\n");
*        client.print("Host: api.thingspeak.com\n");
*        client.print("Connection: close\n");
*        client.print("X-THINGSPEAKAPIKEY: "+chave_escrita_thingspeak+"\n");
*        client.print("Content-Type: application/x-www-form-urlencoded\n");
*        client.print("Content-Length: ");
*        client.print(string_dados.length());
*        client.print("\n\n");
*        client.print(string_dados);
*         
*        last_connection_time = millis();
*        Serial.println("- Informações enviadas ao ThingSpeak!");
*    }
*} 
*/

/* Função: inicializa wi-fi
* Parametros: nenhum
* Retorno: nenhum
*/
/*
void init_wifi(void)
{
    Serial.println("------WI-FI -----");
    Serial.println("Conectando-se a rede: ");
    Serial.println(SSID_REDE);
    Serial.println("\nAguarde...");
 
    conecta_wifi();
}*/
 
/* Função: conecta-se a rede wi-fi
* Parametros: nenhum
* Retorno: nenhum
*/

/* void conecta_wifi(void)
{
    /* Se ja estiver conectado, nada é feito. 
    if (WiFi.status() == WL_CONNECTED)
    {
        return;
    }
     
    /* refaz a conexão 
    WiFi.begin(SSID_REDE, SENHA_REDE);
     
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(100);
    }
 
    Serial.println("Conectado com sucesso a rede wi-fi \n");
    Serial.println(SSID_REDE);
} */
 
/* Função: verifica se a conexao wi-fi está ativa
* (e, em caso negativo, refaz a conexao)
* Parametros: nenhum
* Retorno: nenhum
*/

/* void verifica_conexao_wifi(void)
{
    conecta_wifi();
} */
 
void setup()
{
    pinMode(pino_sinal_analogico, INPUT);
    Serial.begin(9600);
    //last_connection_time = 0;
 
    /* Inicializa sensor de temperatura e umidade relativa do ar */
 
    /* Inicializa e conecta-se ao wi-fi */
    //init_wifi();
}
 
//loop principal
void loop()
{
    //char fields_a_serem_enviados[100] = {0};
    float umidade_lida = 0.0;
    digitalWrite(pino_sinal_analogico, LOW);
 
    /* Força desconexão ao ThingSpeak (se ainda estiver conectado) */
    /*if (client.connected())
    {
        client.stop();
        Serial.println("- Desconectado do ThingSpeak");
        Serial.println();
    }*/
 
    /* Garante que a conexão wi-fi esteja ativa */
    //verifica_conexao_wifi();
     
    /* Verifica se é o momento de enviar dados para o ThingSpeak */
    /*if( millis() - last_connection_time > INTERVALO_ENVIO_THINGSPEAK )
    {
        umidade_lida = analogRead(pino_sinal_analogico);
        sprintf(fields_a_serem_enviados,"%.2f", umidade_lida);
        envia_informacoes_thingspeak(fields_a_serem_enviados);
    }*/

    
    delay(100);
}
