void olha_lados()
{
	//qual distancia é maior? 75° ou 115°
	parar();
	//mover servo esquerda
	viraesquerda();
	int servo75=ler_distancia();
	viradireita();
	//move 115
	int servo115=ler_distancia();
	if(servo75>servo115)
	{
		viradireita();
	}
	else if(servo75 < servo115)
	{
		viraesquerda();
	}
	else
	{
		viraesquerda();
	}

}
