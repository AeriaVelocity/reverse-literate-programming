# Reverse-Literate Programming (RLP)

Your code is now your notes!

## The Story So Far...

So, I'm a university student. That means around 70% of my time is sitting at
a desk and listening to the lecturer read off a presentation, while I take down
notes.

And since I'm a Software Engineering student, of course my lecture notes tend
to include code snippets inside of them. And stuff like Markdown makes that
easy.

But then, today (October 22, 2024), while I was sitting through my Software
Engineering Techniques lecture on pointers and structures, I realised I would
probably have to write down code for this, too. So then, I had a thought - if
I'm gonna write down code, why not just write my notes *in* my code?

This thought birthed reverse-literate programming.

## Overview

Reverse-literate programming (RLP) is a unique approach to writing notes and
documentation, in which the documentation is written in the source code itself.

The name comes from the idea of literate programming, where you can write code
in your notes, using a specialised format (for example, Org-mode in Emacs) and
have it work as proper executable code.

RLP, however, does the opposite - you can write highly-readable notes in your
code, using your chosen language's data structures as well as code comments.

RLP is not the same as making your original source code highly readable - RLP
is about having your notes be written in the same language as your source code,
whether or not it's attached to your original program.

## Getting Started

You don't need any special software to use RLP. All you need is a code editor
and programming knowledge, while adhering to the [guidelines](#guidelines).

## Guidelines

### Write In The Programming Language

There's no specialised format for RLP. You can write in your preferred
programming language or the programming language preferred by your community,
employer, curriculum or whatever else.

```rust
const TITLE = "Even this one!";

fn main() {
    // == Introduction == //
    let introduction: Vec<&str> = vec![
        "Yes, ANY programming language.",
        "Rust included.",
        "As long as it has suitable data structures, it'll work.",
    ];
}
```

### Code Must Run

RLP-ified code is not purely artistic. It should still be able to function as
source code.

```javascript
console.log("This is how you log.")
example(This is not how you example.) // NOT ALLOWED
let example = "not defined, " + " you can't just pass arbitrary keywords as parameters";
```

### Use Preprocessor Directives For Metadata (if applicable)

In C/C++, you can use preprocessor directives to define hardcoded strings.
This can be utilised in RLP to define metadata.

```c
#define TITLE "Some Document"
#define MODULE "Some Module (S0ME-C0D3)"
#define INSTITUTION "Some University"
#define AUTHOR "Some Person"
#define CREATED "20XX-XX-XX"
#define UPDATED "20XX-XX-YY"
```

If your language has no analogue to preprocessor directives, you can use
constants instead.

```rust
const TITLE = "Some Document";
const MODULE = "Some Module (S0ME-C0D3)";
const INSTITUTION = "Some University";
const AUTHOR = "Some Person";
const CREATED = "20XX-XX-XX";
const UPDATED = "20XX-XX-YY";
```

### Use Line Comments For Section Headings

Wherever you would use Markdown's `#`s, use a reStructuredText-style line
comment.

reStructuredText style means that the number of `=` characters signifies how
deep the heading is.

For example:

```python
# == Introduction == #
hello = [
    "Hello, world!",
    "This is a document,",
    "believe it or not."
]

# == Thesis Statement == #
statement = "Python should be used more in professional programming environments because it promotes clean and expressive code."
argument = "Python is not suitable for professional programming because it is an interpreted language."
```

A reST-style heading is purely convention and not a requirement - you could use
whatever you wanted.

```python
## Like this. ##

#-- Or this. --#

#~~~ Or even this. ~~~#
```

### Prefer Data Structures Over Comments

Wherever you can, avoid using comments for body copy, and instead use the
language's data structures.

```cpp
#include <string>

int main() {
    struct ForOrWhile {
        std::string definition[2][100] = {
            {
                "A for loop (`for (init; condition; update) { body }`)",
                "is used to repeat the execution of `body`",
                "as long as `condition` is true while `update` is run once every time.",
                "Ideally `update` is used to update the value of `init`."
            },
            {
                "A while loop (`while (condition) { body }`)",
                "is used to repeat the execution of `body` as long as `condition` is true.",
                "It's a lot simpler than a for loop but is not as flexible.",
                "If you want to terminate a while loop, you have to `break` it."
            }
        };
    }
}
```

## Examples

See the [Examples folder](https://github.com/AeriaVelocity/reverse-literate-programming/tree/main/examples)
for more examples.

## Acknowledgements

- Donald Knuth for introducing literate programming all the way back in 1984
- My university lecturers for boring me enough to write something like this
- My dumbass brain for not making *this* my final year project

## Licence

Permission is granted to copy, distribute and/or modify this document under the
terms of the GNU Free Documentation License, Version 1.3 or any later version
published by the Free Software Foundation; with no Invariant Sections, no
Front-Cover Texts, and no Back-Cover Texts.  A copy of the license is included
in [LICENCE.md](LICENCE.md).
