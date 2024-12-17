[@react.component]
let make = () => {
  <div className="app">
    <Header />
    <TaskContextProvider>
      <TaskList />
    </TaskContextProvider>
    <ThemeSwitcher />
  </div>;
};
