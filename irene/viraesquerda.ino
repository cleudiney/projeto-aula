void viraesquerda()
{
	//configurar servo para 85°
		//configurar servo para 125°
	  for(pos = 100; pos >= 85; pos--)
  {
    s.write(pos);
    delay(15);
  }
	POSX=pos;



}