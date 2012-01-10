//
//  NetworkLinkRule.h
//  ControlPlane
//
//  Created by David Jennes on 04/10/11.
//  Copyright 2011. All rights reserved.
//

#import <Plugins/Rules.h>

@interface NetworkLinkRule : Rule<RuleProtocol> {
	NSString *m_name;
	BOOL m_active;
}

@end