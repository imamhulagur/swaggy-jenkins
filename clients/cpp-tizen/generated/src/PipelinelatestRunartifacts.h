/*
 * PipelinelatestRunartifacts.h
 *
 * 
 */

#ifndef _PipelinelatestRunartifacts_H_
#define _PipelinelatestRunartifacts_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PipelinelatestRunartifacts : public Object {
public:
	/*! \brief Constructor.
	 */
	PipelinelatestRunartifacts();
	PipelinelatestRunartifacts(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PipelinelatestRunartifacts();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	int getSize();

	/*! \brief Set 
	 */
	void setSize(int  size);
	/*! \brief Get 
	 */
	std::string getUrl();

	/*! \brief Set 
	 */
	void setUrl(std::string  url);
	/*! \brief Get 
	 */
	std::string getClass();

	/*! \brief Set 
	 */
	void setClass(std::string  _class);

private:
	std::string name;
	int size;
	std::string url;
	std::string _class;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PipelinelatestRunartifacts_H_ */
