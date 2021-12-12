function isClearNumber(N, results = []) {
    // console.log(results)
    let result = 0
    // var n = N.toString()19 
    for (n of N.toString()) {
        result += Number(n) ** 2
    }
    if (result === 1) {
        return true;
    }
    if (results.includes(result)) {
        return false;
    }
   results.push(result);
   return isClearNumber(result, results);
}
// console.log(isClearNumber(19))



function totalClearNumber(A, B) {
    let result = 0
    for(let i = A; i <= B; i++) {
        if(isClearNumber(i)) {
            result++
        }
    }
    return result
}
console.log(totalClearNumber(2, 100))
