// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 (public class)
 
 @ingroup AWSECommerceServicePortType
*/
@interface ItemLookupRequest : NSObject <PicoBindable> {

@private
    NSString *_condition;
    NSString *_idType;
    NSString *_merchantId;
    NSMutableArray *_itemId;
    NSMutableArray *_responseGroup;
    NSString *_searchIndex;
    NSString *_variationPage;
    NSString *_relatedItemPage;
    NSMutableArray *_relationshipType;
    NSString *_includeReviewsSummary;
    NSNumber *_truncateReviewsAt;

}


/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *condition;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *idType;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *merchantId;

/**
 (public property)
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *itemId;

/**
 (public property)
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *responseGroup;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *searchIndex;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *variationPage;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *relatedItemPage;

/**
 (public property)
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *relationshipType;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *includeReviewsSummary;

/**
 (public property)
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *truncateReviewsAt;


@end
