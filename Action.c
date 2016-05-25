Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("seed", 
		"URL=https://clients4.google.com/chrome-variations/seed?osname=win", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://translate.googleapis.com/translate_a/l?client=chrome&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw&alpha=1", "Referer=", ENDITEM, 
		LAST);

	return 0;
}