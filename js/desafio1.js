  
      termo1 = prompt ("Digite o primeiro termo:");
      termo2 = prompt ("Digite o segundo  termo:");
    conferenum (Number(termo1),Number (termo2));

    function conferenum ( num1, num2)
{

  soma = parseFloat (num1+num2);  
  alert (soma);
  let confere   =  (num1==num2)? true : false ;   
  let intervalo =  (soma>10 && (soma>10&&soma<20))? true : false;
  let resultadoConfere = (confere === true) ? " São iguais " : " São diferentes ";
  let resultadoIntervalo = (intervalo === true) ? " Está no intervalo" : " Não está no intervalo";
  let conf10 = (soma > 10)? " maior que 10 e ":" menor que 10"; 
  let conf20 = (soma > 20)? " maior que 20":" menor que 20";
  alert ("os números: " + num1 + " e " + num2 + resultadoConfere + "sua soma é " + soma + " que é " + conf10 + conf20);


}