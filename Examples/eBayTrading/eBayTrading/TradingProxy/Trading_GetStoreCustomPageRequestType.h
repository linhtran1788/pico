// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"



/**
 
 Retrieves the custom page or pages for the authenticated user's Store.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetStoreCustomPageRequestType : Trading_AbstractRequestType {

@private
    NSNumber *_pageID;

}


/**
 
 If a PageID is specified, then that page is returned, and the returned page
 contains the page Content. If no PageID is specified, then all pages are
 returned, without the page Content.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *pageID;


@end