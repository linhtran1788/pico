// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_AmountType;

/**
 
 Contains summary information about the items the seller is selling.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SellingSummaryType : NSObject <PicoBindable> {

@private
    NSNumber *_activeAuctionCount;
    NSNumber *_auctionSellingCount;
    NSNumber *_auctionBidCount;
    Trading_AmountType *_totalAuctionSellingValue;
    NSNumber *_totalSoldCount;
    Trading_AmountType *_totalSoldValue;
    NSNumber *_soldDurationInDays;

}


/**
 
 The number of currently active auctions that will sell. That
 is, there is at least one bidder, and any reserve price has
 been met. Equivalent to the "Will Sell" value in My eBay.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *activeAuctionCount;

/**
 
 The total number of currently active auctions for a given
 seller. Note that this does not include listings that are
 FixedPriceItem or StoresFixedPrice. Equivalent to the
 "Auction Quantity" value in My eBay.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *auctionSellingCount;

/**
 
 The total number of bids made on the seller's active listings.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *auctionBidCount;

/**
 
 The total value of all items the seller has for sale in all listings.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *totalAuctionSellingValue;

/**
 
 The total number of items the seller has sold.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *totalSoldCount;

/**
 
 The total monetary value of the items the seller has sold.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *totalSoldValue;

/**
 
 The average duration, in days, of all items sold.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *soldDurationInDays;


@end