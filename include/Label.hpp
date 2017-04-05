#ifndef LABEL_HPP
#define LABEL_HPP

#include "Component.hpp"
#include "ResourceIdentifiers.hpp"
#include "ResourceHolder.hpp"

#include <SFML/Graphics/Text.hpp>

namespace GUI
{

class Label : public Component
{
	public:
						Label(const std::string& text, const FontHolder& fonts);
		virtual bool	isSelectable() const;
		void			setText(const std::string& text);

		virtual void	handleEvent(const sf::Event& event);

	private:
		void			draw(sf::RenderTarget& target, sf::RenderStates states) const;

	private:
		sf::Text		mText;
};

}

#endif // LABEL_HPP
