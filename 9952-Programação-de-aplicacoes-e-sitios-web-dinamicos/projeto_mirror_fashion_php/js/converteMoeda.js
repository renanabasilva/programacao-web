function numberParaReal(numero) {
    return "R$ " + numero.toFixed(2).replace(".", ",");
}

function realParaNumber(texto) {
    return parseFloat(texto.replace("R$ ", "").replace(",", "."));
}

// var numero = 99999.9;
// var formatado = "R$ " + numero.toFixed(2).replace(".", ","); // "R$ 9,90"
// console.log(formatado);

// var texto = "R$ 120,35";
// var soNumero = texto.replace("R$ ", ""); // "120,35"
// soNumero = soNumero.replace(",", "."); // "120.35"
// var valor = parseFloat(soNumero);
// console.log(valor);

// var somaDoisNumeros = function (num1, num2) {
// 	return num1 + num2;
// };
// console.log(somaDoisNumeros(10, 20));


// const realParaNumber = (texto) => console.log(parseFloat(texto.replace("R$ ", "").replace(",", ".")));

// realParaNumber("R$ 51,00")
