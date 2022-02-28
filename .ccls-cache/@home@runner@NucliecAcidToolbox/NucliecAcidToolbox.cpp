#include "NucliecAcidToolbox.h"

// Detect (uses bool to keep memory usage down)
bool NucliecAcidToolbox::IsDNA(const std::string &str)
{
	if (str.find('T') != std::string::npos)
	{
		return true;
	}
	return false;
}

// Automatic Transcribe
std::string NucliecAcidToolbox::Transcribe(const std::string &str)
{
	if (IsDNA(str))
	{
		return NucliecAcidToolbox::DnaToRna(str);
	}
	else
	{
		return NucliecAcidToolbox::RnaToDna(str);
	}
}

// Generate DNA sequence
std::string GenerateDNASequence(const unsigned short& amount)
{
    std::string dnaSequence{""};
    const unsigned char availableCharacters[4] {'A', 'C', 'G', 'T'};
    for (int i = 0; i != amount; i++)
    {
        // Generate a number (index)
        uint8_t charIndex = rand() % 0 + 3;
        dnaSequence += availableCharacters[charIndex];
        
    }
    return dnaSequence;
}

// Dna to Rna
char NucliecAcidToolbox::DnaToRna(const char &c)
{
	switch (c)
	{
		case 'G':
			return 'C';
		case 'C':
			return 'G';
		case 'T':
			return 'A';
		case 'A':
			return 'U';
		default:
			return '?';
	}
}
std::string NucliecAcidToolbox::DnaToRna(const std::string &str)
{
	std::string newString {};
	for (char c: str)
		newString += NucliecAcidToolbox::DnaToRna(c);
	return newString;
}

// Rna to Dna
char NucliecAcidToolbox::RnaToDna(const char &c)
{
	switch (c)
	{
		case 'C':
			return 'G';
		case 'G':
			return 'C';
		case 'A':
			return 'T';
		case 'U':
			return 'A';
		default:
			return '?';
	}
}
std::string NucliecAcidToolbox::RnaToDna(const std::string &str)
{
	std::string newString {};
	for (char c: str)
		newString += NucliecAcidToolbox::RnaToDna(c);
	return newString;
}