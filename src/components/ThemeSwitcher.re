[@react.component]
let make = () => {
  let (theme, setTheme) = React.useState("light");

  let toggleTheme = () =>
    setTheme(prevTheme =>
      if (prevTheme === "light") {"dark"} else {"light"}
    );

  <button onClick={_ => toggleTheme()}>
    {React.string("Switch Theme")}
  </button>;
};
