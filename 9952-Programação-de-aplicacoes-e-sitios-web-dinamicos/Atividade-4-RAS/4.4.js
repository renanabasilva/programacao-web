var texto = "R$ 120,35";
var valor = parseFloat(texto.replace("R$ ", "").replace(",", "."));
console.log(valor);