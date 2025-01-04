let notes = [10, 12, 15, 12, 8, 16, 17, 15, 5]
console.log("moyenne: "+ moyenne(notes))
console.log("max : "+ max(notes))
console.log("plus dix : "+ plusDix(notes))


function moyenne(notes) {
    let somme = 0;
    for (let i = 0; i < notes.length; i++) {
        somme += notes[i];
    }
    return somme / notes.length;
}

function max(notes) {
    let max = notes[0];
    for (let i = 1; i < notes.length; i++) {
        if (notes[i] > max) {
            max = notes[i];
        }
    }
    return max;
}

function plusDix(notes) {
    let compteur = 0
    for(let i = 0; i < notes.length; i++){
        if (notes[i] >= 10) {
            compteur++
        }
    }
    return compteur
}