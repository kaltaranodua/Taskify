type trieNode = {
  children: Js.Dict.t(trieNode),
  isEnd: bool,
};

let makeTrie = () => {children: Js.Dict.empty(), isEnd: false};

let insert = (root, word) => {
  let rec loop = (node, index) =>
    if (index >= String.length(word)) {
      node.isEnd = true;
    } else {
      let letter = String.sub(word, index, 1);
      let child = Js.Dict.get(node.children, letter)->Belt.Option.getWithDefault(makeTrie());
      Js.Dict.set(node.children, letter, child);
      loop(child, index + 1);
    };

  loop(root, 0);
};

let search = (root, word) => {
  let rec loop = (node, index) =>
    if (index >= String.length(word)) {
      node.isEnd;
    } else {
      switch (Js.Dict.get(node.children, String.sub(word, index, 1))) {
      | None => false
      | Some(child) => loop(child, index + 1)
      };
    };

  loop(root, 0);
};
