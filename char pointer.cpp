char const * const commandlist[] =
{
  "command 1",
  "command 2",
  "command 3",
  "command 4",
  "command 5",
  "command 6",
};

const int MAX = 70;

char const * const commandlist[] =
{
  //command 1  Sets GPRS Context
  "AT+SAPBR=3,1,\"Contype\",\"GPRS\"\r\n";
  //command 2  Sets APN
  "AT+SAPBR=3,1,\"APN\",\"internet.movistar.ve\"\r\n";
  //command 3  Connects to internet
  "AT+SAPBR=1,1\r\n";
  //command 4  Gets DHCP IP given by provider
  "AT+SAPBR=2,1\r\n";
  //command5   Establishes HTTP session
  "AT+HTTPINIT\r\n";
  //command 6 Defines Cloud
  "AT+HTTPPARA=\"URL\",\"www.castillolk.com.ve/WhiteList.txt\"\r\n";
  //command 7 GET function (has to response 200)
  "AT+HTTPACTION=0\r\n";
};
