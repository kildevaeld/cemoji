const request = require('fetchain').request;
const hbs = require('hbs');
const fs = require('mz/fs');
const Path = require('path');
const URL =
    'https://raw.githubusercontent.com/CodeFreezr/emojo/master/db/v5/emoji-v5.json';

async function generator() {
  let data = await (await request.get(URL)).json();

  let templateData = await fs.readFile('./template/c.hbs');

  template = hbs.handlebars.compile(templateData.toString());
  let output = template({emojis: data, len: data.length});

  await fs.writeFile(Path.join(__dirname, '../src/emoji_data.c'), output);
}

generator()