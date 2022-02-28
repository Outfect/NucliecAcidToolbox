#pragma once
#ifndef NUCLEIC_ACID_TOOLBOX
#define NUCLEIC_ACID_TOOLBOX
#include <iostream>
#include <vector>

namespace NucliecAcidToolbox
{
	// Detect type (DNA / RNA)
	bool IsDNA(const std::string &str);

	// Automatic Transcribal
	std::string Transcribe(const std::string &str);

    // Generate DNA sequence
    std::string GenerateDNASequence(const unsigned short &amount);

	// DNA to RNA 
	char DnaToRna(const char & c);
	std::string DnaToRna(const std::string &str);

	// RNA to DNA
	char RnaToDna(const char &c);
	std::string RnaToDna(const std::string &str);
}

#endif#pragma once
#ifndef NUCLEIC_ACID_TOOLBOX
#define NUCLEIC_ACID_TOOLBOX
#include <iostream>
#include <vector>

namespace NucliecAcidToolbox
{
	// Detect type (DNA / RNA)
	bool IsDNA(const std::string &str);

	// Automatic Transcribal
	std::string Transcribe(const std::string &str);

    // Generate DNA sequence
    std::string GenerateDNASequence(const unsigned short &amount);

	// DNA to RNA 
	char DnaToRna(const char & c);
	std::string DnaToRna(const std::string &str);

	// RNA to DNA
	char RnaToDna(const char &c);
	std::string RnaToDna(const std::string &str);
}

#endif