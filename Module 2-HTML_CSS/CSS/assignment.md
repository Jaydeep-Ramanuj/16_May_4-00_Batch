This is normal text
<b>This is bold tag</b>
<i>This is i tag</i>

**This is bold text**
_Italic_

<a href="https://github.com/microsoft/vscode/blob/main/README.md">Vscode</a>

[Vscode](https://github.com/microsoft/vscode/blob/main/README.md)

![Image not loading](https://media2.giphy.com/media/v1.Y2lkPTc5MGI3NjExbjM0NTAwbWJpcGpnbjBydWJtaHhncnIwbzIxMTkzb3dtMnFya21uNiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9cw/Wf9dyOrB0nGJn5FIYf/giphy.webp)

<table>
    <tr>
        <td>
        data1
        </td>
        <td>item2</td>
    </tr>
    <tr>
        <td>
        data2
        </td>
    </tr>
    <tr>
        <td>
        data3
        </td>
    </tr>
</table>

---

| Header1 | Header2 | Header3 |
| ------- | ------- | ------- |
| Data1   | Data2   | Data3   |
| Data2   | Data3   | Data4   |
| Data1   | Data2   | Data3   |

---

# Heading 1

## Heading 2

### Heading 3

#### What is Void tag

Void tag has no ending tag, hence it cannot have content inside it, that's why its called void element. Ex. `<br/>`, `<img/>`

## Hover button program

Here is html

```html
<div class="btn">Hover me</div>
```

And here is css for it,

```css
body {
  background-color: #24252e;
}
.btn {
  height: 50px;
  width: 150px;
  border-radius: 3px;
  /* background-color: lightgray; */
  background-image: linear-gradient(lightgray, lightgray);
  font-size: 18px;
  font-weight: 600;
  font-family: 'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande',
    'Lucida Sans Unicode', Geneva, Verdana, sans-serif;
  display: flex;
  justify-content: center;
  align-items: center;
  margin: 100px auto;
  position: relative;
  transition: all 300ms;
}

.btn::before {
  content: '';
  height: 100%;
  width: 100%;
  border-radius: 3px;
  outline: 2px solid black;
  position: absolute;
  transition: all 300ms;
}

.btn:hover {
  background-image: linear-gradient(to right, lightgray, blue);
}
.btn:hover::before {
  outline-offset: 6px;
}
.btn::after {
  content: '';
  height: 100%;
  width: 100%;
  border-radius: 3px;
  outline: 2px solid black;
  position: absolute;
  transition: all 600ms;
}

.btn:hover:after {
  outline-offset: 12px;
}
```

<a href="Module 2-HTML_CSS/CSS/background-13-6.html">Background file</a>

<a href="C:\Jd\Batches\16_May_4-00_Batch\Module 2-HTML_CSS\CSS\background-13-6.html">Background file</a>

https://github.com/microsoft/vscode/blob/main/README.md?plain=1
