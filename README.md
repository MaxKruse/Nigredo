# Nigredo Engine

This engine is basically a follow-along with [The Cherno](https://github.com/TheCherno)'s engine [Hazel](https://github.com/TheCherno/Hazel).

## About the name

I really enjoy the anime [Overlord](http://overlordmaruyama.wikia.com/wiki/Overlord_Wiki) (as seen on my other repos), therefore i went with a family of names inspired from it.

For reference, [Albedo](http://overlordmaruyama.wikia.com/wiki/Albedo), [Nigredo](http://overlordmaruyama.wikia.com/wiki/Nigredo) and [Rubedo](http://overlordmaruyama.wikia.com/wiki/Rubedo) are the strongest sister to be known in the world of Overlord. Sadly i cannot find a use for Rubedo yet, if anybody has ideas let me know.

## Structure

### Albedo
* The sandbox of the engine

### Nigredo
* The main engine as a DLL

### Rubedo
* !UNUSED!


## Development
```
> git clone --recurse-submodules https://github.com/MaxKruse/Nigredo.git
```
This engine is only tested for x64 systems, running AMD Graphics.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Build
Simply run ```buildFiles.bat``` to generate projectfiles for Visual Studio 2017.

You might want to edit the file to set a different build target, as well as make sure you check the "Show all Files" Box in Visual Studio to see the correct project-structure.


## Credits
- [The Cherno](https://github.com/TheCherno) for being an awesome Youtuber that teaches people about programming in a professional and yet easy-to-understand way.
- [Premake 5](https://github.com/premake/premake-core) for the project generation.