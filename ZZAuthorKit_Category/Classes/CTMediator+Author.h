//
//  CTMediator+Special.h
//  ZZAuthorKit_Category
//
//  Created by Leasing on 2018/6/17.
//

#import <UIKit/UIKit.h>
#import <CTMediator/CTMediator.h>
#import <ZZAPIsKit/APIRequest.h>

@interface CTMediator (Author)

- (UIViewController*)authorDetailViewController;

- (NSDictionary*)authorReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)authorReformer;

- (APIRequest*)authorAPIRequest;

@end
