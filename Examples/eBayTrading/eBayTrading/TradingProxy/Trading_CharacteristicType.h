// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_ValType;
@class Trading_LabelType;

/**
 
 This type is deprecated as the <b>GetProduct*</b> calls are no longer available.
 
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_CharacteristicType : NSObject <PicoBindable> {

@private
    NSNumber *_attributeID;
    NSString *_dateFormat;
    NSString *_displaySequence;
    NSString *_displayUOM;
    Trading_LabelType *_label;
    NSString *_sortOrder;
    NSMutableArray *_valueList;
    NSMutableArray *_any;

}


/**
 
 
 Constant value that identifies the characteristic in a language-independent way.
 Unique within the characteristic set.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *attributeID;

/**
 
 
 Applicable when working with Pre-filled Item Information (Catalogs) functionality.
 Returned if the characteristic is a Date data type. Specifies the pattern
 to use when presenting the date to a user. Possible values:
 Day/Month/Year, Month/Year, Year Only.
 For example, the Year Only format would indicate that the date
 should be a value like 1999.
 Output only.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *dateFormat;

/**
 
 
 The suggested order in which the characteristic should be presented
 to the user in a list. Indicates the relative position of the sort
 key in the list of characteristics. The characteristic with the
 lowest display sequence is considered the default sort key in calls
 to GetProductSearchResults. Aside from that, usage of this display
 sequence information is optional. For example, in an application
 with a graphical user interface, a characteristic with a display
 sequence of 2 could be presented before one with a display sequence
 of 3 in a drop-down list. If multiple sort characteristics are
 returned for a characteristic set, compare their display sequence
 values to determine the lowest available value (usually 0) and the
 overall sequence.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *displaySequence;

/**
 
 
 Applicable when working with Pre-filled Item Information (Catalogs) functionality.
 The unit of measure (e.g., Inch) to use when the characteristic is numeric indicates a measurement.
 Not returned if not applicable.
 Output only.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *displayUOM;

/**
 
 
 Applicable when working with Pre-filled Item Information (Catalogs) functionality.
 The label to display when presenting the attribute to a user.
 Not necessarily the same as the attribute's label as defined in the
 characteristic set (i.e., the label could be overridden by the catalog).
 
 
 type : class Trading_LabelType
*/
@property (nonatomic, retain) Trading_LabelType *label;

/**
 
 
 Applicable when working with Pre-filled Item Information (Catalogs) functionality.
 Indicates the order in which eBay's search engine will sort the results if you
 pass this characteristic as a sort attribute in GetProductSearchResults.
 You cannot change the sort order of a characteristic when you perform a search.
 (Of course, you can change the sort order when you present results in your own application.)
 In GetProductSearchPage, if SortOrder is not returned at all, it means the results will be returned
 in the order in which they are stored on eBay (which can be useful for
 international sites that use ideographic characters).
 Output only.
 
 
 type: string constant in Trading_SortOrderCodeType.h
*/
@property (nonatomic, retain) NSString *sortOrder;

/**
 
 
 List of one or more valid values for the characteristic.
 
 
 entry type : class Trading_ValType
*/

@property (nonatomic, retain) NSMutableArray *valueList;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end