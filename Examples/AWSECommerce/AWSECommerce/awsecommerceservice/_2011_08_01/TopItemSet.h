// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class TopItem;

/**
 (public class)
 
 @ingroup AWSECommerceServicePortType
*/
@interface TopItemSet : NSObject <PicoBindable> {

@private
    NSString *_type;
    NSMutableArray *_topItem;

}


/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *type;

/**
 (public property)
 
 entry type : class TopItem
*/

@property (nonatomic, retain) NSMutableArray *topItem;


@end
