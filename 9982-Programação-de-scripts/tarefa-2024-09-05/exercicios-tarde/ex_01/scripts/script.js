let slideIndex = 0;
showSlides();
 
function showSlides() {
    let i;
    const slides = document.getElementsByClassName("slide");
   
    for (i = 0; i < slides.length; i++) {
        slides[i].style.display = "none";
    }
   
    slideIndex++;
   
    if (slideIndex > slides.length) {
        slideIndex = 1;
    }
   
    slides[slideIndex - 1].style.display = "block";
   
    // Troca de imagem a cada 1 segundo (1000 milissegundos)
    setTimeout(showSlides, 2000);
}