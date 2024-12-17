module TaskContext = {
  type task = {
    id: int,
    name: string,
    completed: bool,
  };

  let context = React.createContext([]);

  @react.component
  let make = (~children) => {
    let tasks = React.useState(() => [
      {id: 1, name: "Learn ReasonML", completed: false},
      {id: 2, name: "Build Taskify App", completed: true},
    ]);

    <context.Provider value=tasks>
      {children}
    </context.Provider>;
  };

  let useContext = () => React.useContext(context);
};

include TaskContext;
