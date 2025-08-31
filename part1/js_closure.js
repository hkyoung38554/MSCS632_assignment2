// file: js_closure.js
function makeAdders() {
  const adders = [];
  for (let k = 0; k < 3; k++) {
    adders.push((x) => x + k);
  }
  return adders;
}

const [f, g, h] = makeAdders();
console.log(f(10), g(10), h(10));
