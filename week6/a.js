onClick = () => {
  axios
    .get("http://localhost:5000/api/items")
    .then(items => this.listItems(items))
    .catch(err => console.log(err));
};
