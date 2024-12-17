[@react.component]
let make = () => {
  let tasks = TaskContext.useContext();

  <ul className="task-list">
    {tasks
      |> Array.map(task =>
           <TaskItem
             key=task.id
             task,
           />
         )}
  </ul>;
};
