.PHONY: default

JOBNAME=presentation
FILES=main.tex

# Generate PDF
default:
	rm -rf build
	mkdir build
	latexmk -shell-escape -jobname=build/$(JOBNAME) -pdf $(FILES)

# Remove all temporary files
clean:
	latexmk -C
	rm -rf build

