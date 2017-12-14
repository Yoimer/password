  // commandlist[0] = "AT+SAPBR=3,1,\"Contype\",\"GPRS\"\r\n";                                // Sets GPRS Context
  // commandlist[1] = "AT+SAPBR=3,1,\"APN\",\"internet.movistar.ve\"\r\n";                   // Sets APN
  // commandlist[2] = "AT+SAPBR=1,1\r\n";                                                   // Connects to internet
  // commandlist[3] = "AT+SAPBR=2,1\r\n";                                                  //  Gets DHCP IP given by provider
  // commandlist[4] = "AT+HTTPINIT\r\n";                                                  //  Establishes HTTP session
  // commandlist[5] = "AT+HTTPPARA=\"URL\",\"www.castillolk.com.ve/WhiteList.txt\"\r\n"; //  Defines Cloud
  // commandlist[6] = "AT+HTTPACTION=0\r\n"; // GET function (has to response 200)


char const * const commandlist[] =
{
  "command 1",
  "command 2",
  "command 3",
};

const int MAX = 7;

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